#include<stdio.h>
#include<string.h>
int main(void)
{
	char xing[40],ming[40];
	
	printf("enter your xing:");
	scanf("%s",xing);
	printf("enter your ming:");
	scanf("%s",ming);
	
	printf("%s %s\n",xing,ming);
	printf("%*d %*d\n",strlen(xing),strlen(xing),strlen(ming),strlen(ming));
	printf("%s %s\n",xing,ming);
	printf("%-*d %-*d\n",strlen(xing),strlen(xing),strlen(ming),strlen(ming));
	return 0;
}
