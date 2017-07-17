#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct month {
	char month[20];
	char abbrev[4];
	int days;
	int numb;
}; 

struct month months[12] = {
	{ "January", "jan", 31, 1 },
	{ "February", "feb", 28, 2 },
	{ "March", "mar", 31, 3 },
	{ "April", "apr", 30, 4 },
	{ "May", "may", 31, 5 },
	{ "June", "jun", 30, 6 },
	{ "July", "jul", 31, 7 },
	{ "August", "aug", 31, 8 },
	{ "September", "sep", 30, 9 },
	{ "October", "oct", 31, 10 },
	{ "November", "nov", 30, 11 },
	{ "December", "dec", 31, 12 }
};

char * s_gets(char *st, int n);
int days ( int y, char *m, int d);

int main(void)
{
	char m[40];
	int year;
	int day;

	
	printf("Enter the year (empty line to quit):\n");
	while ( scanf("%d", &year) == 1 )
	{
		puts("And month and day");
		scanf("%s %d", m, &day);
		printf("Up to %d %s %d, we have passed %d days\n", year, m, day, days(year, m, day));
		printf("Enter the year:\n");
	}
	
	puts("Done!");
	
    return 0;
}


int days ( int y, char *m, int d)
{
	int i,j;
	int total = 0;
	char std[20];

	
	i = 0;
	j = 0;
	
	while(*m)
	{
		std[i] = *m;
		i++;
		m++;
	}

	while (j <= i)
	{
		std[j] = tolower(std[j]);
		j++;
    }
	
	for ( i = 0; i < 12; i++)
		months[i].month[0] = tolower(months[i].month[0]);
		
	i =0;
	
	while ( total == 0   )
	    {   
	        if ( strcmp(std, months[i].month) == 0 || strcmp(std, months[i].abbrev) == 0 || atoi(std) == months[i].numb )
	           {
			    for (j = 0; j < i ; j++)
	            	total += months[j].days;
	            	
	            }
	        i++;
	          	    
		}

	return (total+d);
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
