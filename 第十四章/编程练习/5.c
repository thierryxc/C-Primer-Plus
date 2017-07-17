#include<stdio.h>
#include<string.h>
#define SIZE 20
#define CSIZE 4
#define GRADES 3
 
char * s_gets(char *st, int n);
struct name {
	char fname[SIZE];
	char lname[SIZE];
};
struct student {
	struct name names;
	float grade[GRADES];
	float average;
};

void getinfo(struct student[],int count); 
void showinfo(struct student[],int count);
void showave(struct student[],int count);

int main(void)
{
	struct student info[CSIZE] = {
		{ { "chen", "xu" } },
		{ { "ji", "sa" } },
		{ { "de", "li" } },
		{ { "xi", "xi" } },
	};
	
	getinfo(info, CSIZE);
	showinfo(info, CSIZE);
	showave(info, CSIZE);
	
	return 0;
}


void getinfo(struct student pt[],int count)
{
    int i,j;
    float tot;
    
	for (i = 0; i <  count; i++)
	{
		printf("Please enter the grades for %s %s:\n",pt[i].names.fname, pt[i].names.lname);
		for (j = 0; j < GRADES; j++)
		{
		    printf("Enter NO.%d grades:",j + 1);
			scanf("%f",&pt[i].grade[j]);
			while (getchar() != '\n')
			    continue;
			tot += 	pt[i].grade[j];

		}
	
		pt[i].average = tot / GRADES;
		tot = 0;
		
	}	
}

void showinfo(struct student pt[],int count)
{
	int i,j;
	float tot;
	
	for (i = 0, tot = 0; i < count; i++)
	{
		printf("The grades for %s %s:\n",pt[i].names.fname, pt[i].names.lname);
		for (j = 0; j < GRADES; j++)
		{
		    printf("NO.%d grades: %.2f\n", j, pt[i].grade[j]);
		}
		printf("The ave is: %.2f\n", pt[i].average);
		
	}	
}

void showave(struct student pt[],int count)
{
    int i;
    float tot = 0;
	
	for (i = 0, tot = 0; i <  count; i++)
	    tot += 	pt[i].average;
	    
	printf("The tot ave is: %.2f\n",tot / CSIZE);
}
