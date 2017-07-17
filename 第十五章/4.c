#include<stdio.h>

const int SIZE = sizeof(int);
int isone(int,int);
char * itobs(int, char *);

int main(void)
{
	int num;
	int pos;
	char bstr[sizeof(int)];
	puts("enter a number:");
	while ( scanf("%d",&num) == 1)
	{
		itobs(num,bstr);
		puts("enter the pos:");
		while(scanf("%d",&pos) !=1 || pos > sizeof(int))
		    puts("try again");
		printf("%d (%s) pos %d is %d.\n ",num,bstr,pos,isone(num,pos));
		puts("next:");
	}
		
	puts("done.");
	
	return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    static int size = sizeof(int);
    for (i = size - 1; i >= 0; i--, n >>= 1)
    ps[i] = (01 & n) + '0';
    ps[size] = '\0';
    return ps;
}

int isone(int n,int m)
{
	n >>= m;
	
	return (01 & n); 
}

