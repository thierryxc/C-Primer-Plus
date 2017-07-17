//包含多本书的图书目录
#include<stdio.h>
#include<string.h>
char * s_gets(char *st, int n);


#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};  //结构模板
void sort_a(struct book *pt[], int count);
void sort_b(struct book *pt[], int count);
int main(void)
{
	struct book library[MAXBKS];//book 类型结构的数组
	int count = 0;
	int index;
	struct book *pb[MAXBKS];
	
	printf("Please enter the book title.\n"); 
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
    	printf("Now enter the author.\n");
	    s_gets(library[count].author, MAXAUTL);
	    printf("Now enter the value.\n");
	    scanf("%f",&library[count].value);
	    pb[count] = &library[count];
	    count++;
	    while (getchar() != '\n')
	        continue;//清理输入行
		if (count < MAXBKS)
		    printf("Enter the next title.\n"); 
	}
	
	if (count > 0)
	{
		printf("Here is the list of your books:\n");
		for (index = 0; index < count; index++)
		    printf("%s by %s: $%.2f\n",library[index].title, library[index].author, library[index].value);
		sort_a(pb,count);
		printf("Here is the list of your books:\n");
		for (index = 0; index < count; index++)
		    printf("%s by %s: $%.2f\n",pb[index]->title, pb[index]->author, pb[index]->value);
		sort_b(pb,count);
        printf("Here is the list of your books:\n");
		for (index = 0; index < count; index++)
		    printf("%s by %s: $%.2f\n",pb[index]->title, pb[index]->author, pb[index]->value);

	}
	else
	    puts("No books? Too bad.");
	
	return 0; 
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

void sort_a(struct book *pt[], int count)
{
	struct book *temp;
	int top,seek;
	for (top = 0; top < count - 1; top++)
	    for (seek = top + 1; seek < count; seek++)
		    if ( strcmp(pt[top]->title,pt[seek]->title) > 0 )
			{
				temp = pt[top];
				pt[top] = pt[seek];
				pt[seek] = temp;
			 } 
}

void sort_b(struct book *pt[], int count)
{
	struct book *temp;
	int top,seek;
	for (top = 0; top < count - 1; top++)
	    for (seek = top + 1; seek < count; seek++)
		    if (pt[top]->value > pt[seek]->value)
			{
				temp = pt[top];
				pt[top] = pt[seek];
				pt[seek] = temp;
			 } 
}
