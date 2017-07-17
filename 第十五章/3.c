#include<stdio.h>

int num(int);
char * itobs(int, char *);

int main(void)
{
	int n;
	
	puts("enter a number:");
	while ( scanf("%d",&n) == 1)
		printf("The number  of open is %d\n",num(n));
		
	puts("done.");
	
	return 0;
 } 
 
 char * itobs(int n, char * ps)
{
int i;
static int size = 8 * sizeof(int);
for (i = size - 1; i >= 0; i--, n >>= 1)
ps[i] = (01 & n) + '0';
ps[size] = '\0';
return ps;
}
 
int num(int x)
{
int ct = 0;
int i;
for (i = 0; i < sizeof(int) + 1; i++, x >>= 1)
    if ((1 & x) == 1)
        ct++;
    return ct;
	

	
}
 
