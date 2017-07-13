#include<stdio.h>
int main(void)
{
	char name[40];
	printf("enter your name :");
	scanf("%s",name);
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	
	return 0;
	
}
