//在文件中保存结构的内容
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  10
char * s_gets(char *st, int n);
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

char getchoice(void);
void add(struct book *);
void change (struct book *);
void del (struct book *);
 
int count = 0;

int main (void)
{
	struct book library[MAXBKS];
	
	int index;
	FILE * pbooks;
	int size = sizeof(struct book);
	char ch;
	
	if ((pbooks = fopen("book.dat","a+b")) == NULL)
	{
		fputs("Can't open book.dat file.\n", stderr);
		exit(1);
	}
	
	rewind(pbooks);
	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	{
		if (count == 0)
		    puts("Current contents of book.dat:");
		printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}
	
	fclose(pbooks); 
	
    while ((ch = getchoice()) != 'q')
    {
    	switch (ch)
    	{
    		case 'a': add(library);
    		          break;
    		case 'b': change(library);
    		          break;
    		case 'c': del(library);
    		          break;
    		case 'q': break;
    		default : puts("invaild input!");
    		          break;
		}
		
	}

	if ((pbooks = fopen("book.dat","w+b")) == NULL)
	{
		fputs("Can't open book.dat file.\n", stderr);
		exit(1);
	}
    rewind(pbooks);
	
	if (count > 0)
	{
		puts("Here is the list of your books:");
		for (index = 0; index < count; index++)
		    printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
		fwrite(&library[0], size, count, pbooks);
	}
	else
	    puts("No books? Too bad.\n");
	    
	puts("88\n");
	fclose(pbooks);
	
	return 0;
}

char getchoice(void)
{
	char choice;
	
	puts("Enter your choice:");
	puts("a.add        b.change");
	puts("c.del        q.quit");
	choice = getchar();
	while (getchar() != '\n')
	    continue;
	
	return choice;
	    
}

void add(struct book *pb)
{
	if (count == MAXBKS)
	{
		fputs("The book.dat file is full.\n", stderr);
		exit(2);
	}
	
	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop.");
	while (count < MAXBKS && s_gets(pb[count].title, MAXTITL) !=NULL && pb[count].title[0] != '\0')
	{
		puts("Now enter the author.");
		s_gets(pb[count].author, MAXAUTL);
		puts("Now enter the value");
		scanf("%f",&pb[count++].value);
		while (getchar() != '\n')
		    continue;
		if ( count < MAXBKS)
		    puts("Enter the next title."); 
	}	
}

void change (struct book *pb)
{
	int i;
	char name[MAXTITL];
	puts("Enter the title:");
	s_gets(name, MAXTITL);
	
	for (i = 0; i < count; i++)
	{
		if (strcmp(name, pb[i].title) == 0)
		{
		    puts("Please add new book titles.");
		    s_gets(pb[i].title, MAXTITL);
		    puts("Now enter the author.");
		    s_gets(pb[i].author, MAXAUTL);
		    puts("Now enter the value");
		    scanf("%f",&pb[i].value);
		    while (getchar() != '\n')
		        continue;
		    break;
				
		}
		if ( i ==count)
		    puts("Can't find book.");
	}
}

void del (struct book *pb)
{
	int i,j;
	char name[MAXTITL];
	puts("Enter the title:");
	s_gets(name, MAXTITL);
	for (i = 0; i < count; i++)
	{
		if (strcmp(name, pb[i].title) == 0)
		{
			for (j = i+1; j < count; j++)
				pb[j-1] = pb[j];
			count--;
			break;
	    }
	if ( i ==count)
		puts("Can't find book.");
    }
}


char * s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	
	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st,'\n');
		if (find)
		    *find = '\0';
		else
		    while (getchar() != '\n')
		        continue;
		        
	}
	return ret_val;
}
