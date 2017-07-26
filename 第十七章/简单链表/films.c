#include<stdio.h>
#include<stdlib.h>
#include"list.h"

void showmovies(Item item);
char * s_gets(char *st, int n);
int main(void)
{
	List movies;
	int count;
	Item temp;
	
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "No memory available!\n");
		exit(1);
	}
	
	puts("Enter first moive title");
	while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
	{
		puts("Enter your rating <1-10>:");
		scanf("%d", &temp.rating);
		while (getchar() != '\n')
		    continue;
		if (AddItem(temp,&movies) == false)
		{
			fprintf(stderr,"Problem allocating memory.\n");
			break;
		}
		if (ListIsFull(&movies))
	    {
		fprintf(stderr, "The list is now full.\n");
		break;
	    }
        puts("Enter the next title:");	
	}
	
	if (ListIsEmpty(&movies))
	    printf("No data entered.\n");
	else
	{
		printf("Here is the moive list:\n");
		Traverse(&movies, showmovies);
	}
	
	
 
	printf("You entered %d moives.\n", ListItemCount(&movies));
	
	EmptyTheList(&movies);
	puts("88");
	
	return 0;
}

void showmovies(Item item)
{
	printf("Moive: %s Rating: %d\n",item.title, item.rating);
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
