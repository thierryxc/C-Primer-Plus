#include<stdio.h>
#include<limits.h>
int bstoi(char *ps);
char * s_gets(char *st, int n);

int main(void)
{
	size_t len = CHAR_BIT *sizeof(int) + 1;
	char value[len];
	puts("Enter a binary:");
	while (s_gets(value, len) != NULL && value[0] != '\0')
	{
		printf("%s is %d\n",value,bstoi(value));
		puts("Next(empty line to quit):");
	}
	
	return 0;
 } 
 
 int bstoi(char *ps)
 {
 	int val;
 	while(*ps != '\0')
 	{
 		val = val * 2 + (*ps++ - '0');
	 }
	
	return val;
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
