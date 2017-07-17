#include<stdio.h>
#include<string.h>
#include<ctype.h>

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
int days ( char *s);

int main(void)
{
	char m[40];

	
	printf("Enter the month (empty line to quit):\n");
	while ( s_gets(m, 40) != NULL && m[0] != '\0')
	{
		printf("Up to %s, we have passed %d days\n", m, days(m));
		printf("Enter the month (empty line to quit):\n");
	}
	
	puts("Done!");
	
    return 0;
}


int days( char *s)
{
	int i,j;
	int total = 0;
	char std[20];
	
	i = 0;
	j = 1;
	while(*s)
	{
		std[i] = *s;
		i++;
		s++;
	}
	std[0] = toupper(std[0]);
	while (j <= i)
	{
		std[j] = tolower(std[j]);
		j++;
    }
	
	for ( i = 0; i < 12; i++)
	{
	
	    if ( strcmp(std, months[i].month) == 0 )
	        {
	            for (j = 0; j < i + 1; j++)
	            	total += months[j].days;
			}
		 
	}
	
	return total;
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
