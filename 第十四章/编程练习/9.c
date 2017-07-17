#include<stdio.h>
#include<string.h>

#define SIZE 20
#define SEATS 12

struct seat {
	int id;
	int order;
	char fname[SIZE];
	char lname[SIZE];
};

char * s_gets(char *st, int n);
void nempty(struct seat *);
void lempty(struct seat *);
void ordered(struct seat *);
void assign(struct seat *);
void del(struct seat *);
char getchoice(void);



int main(void)
{
	struct seat seats[SEATS];
	char filename[SIZE];
	int index;
	FILE * pseats;
	size_t size = sizeof(struct seat);
	char ch;
	
	puts("Enter the number of plane(press [enter] at the start of a line to stop):");
	while (s_gets(filename, SIZE) != NULL && filename[0] != '\0'  )
	{
	strcat(filename,".dat");
	if ((pseats = fopen(filename,"rb")) == NULL)
	{
		for (index = 0; index < SEATS; index++)
		{
			seats[index].id = index + 1;
			seats[index].order = 0;
		}
	}
	else
    {
        fread(&seats, size, SEATS, pseats);
        fclose(pseats); 
    }
	while ((ch = getchoice()) != 'q')
    {
    	switch (ch)
    	{
    		case 'a': nempty(seats);
    		          break;
    		case 'b': lempty(seats);
    		          break;
    		case 'c': ordered(seats);
    		          break;
    		case 'd': assign(seats);
    		          break;
    		case 'e': del(seats);
    		          break;
    		case 'q': break;
    		default : puts("invaild input!");
    		          break;
		}
	}
	if ((pseats = fopen(filename,"w+b")) == NULL)
	{
		fputs("Can't open file.\n", stderr);
		exit(1);
	}
    rewind(pseats);

	fwrite(&seats, size, SEATS, pseats);
	fclose(pseats);
	puts("Enter the number of plane(press [enter] at the start of a line to stop):");
}
	
	puts("88\n");
	
	
	return 0;

}

char getchoice(void)
{
	char choice;
	
	puts("Enter your choice:");
	puts("a.show number of empty seats        b.show list of empty seats");
	puts("c.show the info of ordered seats    d.assign a customer to a seat assignment");
	puts("e.delete a seat assignment          q.quit");
	choice = getchar();
	while (getchar() != '\n')
	    continue;
	
	return choice;
}

void nempty(struct seat *ps)
{
	int count = 0;
	int i;
	for (i = 0; i < SEATS; i++)
	{
		if (ps[i].order == 0)
		    count++;
	}
	printf("Here are %d seats lfet.\n",count);
}

void lempty(struct seat *ps)
{
	int i;
	int count = 0;
	for (i = 0; i < SEATS; i++)
	{
		if (ps[i].order == 0)
	    {
		    printf("%d ",ps[i].id);
		    count++;
	    }
	}
	if (count == 0)
	    printf("No empty seats.");
	printf("\n");	
}

void ordered(struct seat *ps)
{
	int i;
	int count = 0;
	for (i = 0; i < SEATS; i++)
	{
		if (ps[i].order == 1)
	    {
		    printf("%d  ordered by %s %s.\n",ps[i].id, ps[i].fname, ps[i].lname);
		    count++;
	    }
    }
	    if (count == 0)
	    printf("All empty seats.\n");
}

void assign(struct seat *ps)
{
	int seatid;

	
	lempty(ps);
	puts("Enter the id of seat you want:");
	while(scanf("%d",&seatid) != 1 || ps[seatid -1].order == 1 || seatid < 1 || seatid > 12)
	    printf("Error input!\nTry again:");
	while (getchar() != '\n')
	    continue;
	puts("Now enter your first name:");
	s_gets(ps[seatid-1].fname, SIZE);
	puts("Now enter your last name:");
	s_gets(ps[seatid-1].lname, SIZE);
	
	ps[seatid-1].order = 1;
	
	printf("dear %s %s, you have ordered No.%d seat.\n",ps[seatid-1].fname, ps[seatid-1].lname, ps[seatid -1].id);
}

void del(struct seat *ps)
{
	int seatid;
	
	ordered(ps);
	puts("Enter the id of seat you want to del:");
	while(scanf("%d",&seatid) != 1 || ps[seatid -1].order ==0 || seatid < 1 || seatid > 12)
	    printf("Error input!\nTry again:");	
	strcpy(ps[seatid-1].fname,"");
	strcpy(ps[seatid-1].lname,"");
	ps[seatid-1].order = 0;
	
	puts("You have del it");
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
