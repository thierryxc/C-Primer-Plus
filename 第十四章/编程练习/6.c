#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20
#define NUMB 19


struct info {
	int num;
	char fname[SIZE];
	char lname[SIZE];
	int on;
	int hit;
	int move;
	int rbi;
	float anda;
}; 

void init(struct info information[], int n);
void load(char *st , struct info information[], int n);
void showinfo(struct info information[], int n);

int main(void)
{
	struct info data[NUMB];
	
	init (data, NUMB);
	load ("data.txt", data, NUMB);
	showinfo(data, NUMB);
	
	return 0;
}

void init(struct info information[], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		information[i].num = i;
		information[i].hit = 0;
		information[i].on = 0;
		information[i].move = 0;
		information[i].rbi = 0;
		information[i].anda = 0;
		strcpy(information[i].fname, "");
		strcpy(information[i].lname, "");
	}
	printf("DONE!\n");
}

void load(char *st , struct info information[], int n)
{
	FILE *fp;
	int num;
	char fname[SIZE];
	char lname[SIZE];
	int on;
	int hit;
	int move;
	int rbi;
	
	int i;
    
    if ((fp = fopen(st, "r")) == NULL)
    {
    	printf("Can't open %s file.\n",st);
    	exit(EXIT_FAILURE);
    }
    rewind(fp);
    	while (fscanf(fp,"%d%s%s%d%d%d%d",&num, fname, lname, &on, &hit, &move, &rbi) == 7)
    	{
    		puts(fname);
    		information[num].num = num;
    		strcpy(information[num].fname, fname);
    	    strcpy(information[num].lname, lname);
    		information[num].on += on;
    		information[num].hit += hit;
    		information[num].move += move;
    		information[num].rbi += rbi;	
		}
	printf("open£¡\n");
	
	for (i = 0; i < n; i++)
	{
		if ( information[i].fname != '\0')
		    information[i].anda = (float)information[i].hit / information[i].on;
	}
	fclose(fp);
	
}

void showinfo(struct info information[], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
    {
		if ( information[i].fname[0] != '\0')
		    printf("%d %s %s %d %d %d %d %.2f\n",information[i].num, information[i].fname, information[i].lname, information[i].on, information[i].hit, information[i].move, information[i].rbi, information[i].anda);
	}	
}

