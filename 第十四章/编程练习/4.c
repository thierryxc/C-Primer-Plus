#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 20

char * s_gets(char *st, int n);
struct name {
	char fname[SIZE];
	char lname[SIZE];
	char mname[SIZE];
};
struct info {
	char numb[SIZE];
	struct name names;
};
void showinfo(struct info * pb[],int n);
void showinfo2(struct info pb[],int n);

int main(void)
{   
    int i; 
	struct info *pt[5];
	struct info lists[5] = {
		{ "123456", { "jack", "jones", "Meal"}, },
		{ "123456", { "jack", "jones", "Meal"}, },
		{ "123456", { "jack", "jones", "Meal"}, },
		{ "123456", { "jack", "jones", "Meal"}, },
		{ "123456", { "jack", "jones" } }
	};
	for (i = 0; i < 5; i++)
	    pt[i] = &lists[i];
	
	showinfo(pt,5);
	showinfo2(lists,5);    
	
	return 0;
 } 
 
void showinfo(struct info * pb[],int n)
{   
    int index;
	for (index = 0; index < n; index++)
	{
		if ( isupper(pb[index]->names.mname[0]))
		    printf("%s, %s %c. -- %s\n",pb[index]->names.fname, pb[index]->names.lname, pb[index]->names.mname[0], pb[index]->numb);
		else
            printf("%s, %s -- %s\n",pb[index]->names.fname, pb[index]->names.lname, pb[index]->numb);		    
	}
}

void showinfo2(struct info pb[],int n)
{   
    int index;
	for (index = 0; index < n; index++)
	{
		if ( isupper(pb[index].names.mname[0]))
		    printf("%s, %s %c. -- %s\n",pb[index].names.fname, pb[index].names.lname, pb[index].names.mname[0], pb[index].numb);
		else
            printf("%s, %s -- %s\n",pb[index].names.fname, pb[index].names.lname, pb[index].numb);		    
	}
}
