#include<stdio.h>
int main(void)
{
	int day,xday;
	int money;
	
	xday = 1;
	money = 0;
	
	printf("enter days:");
	scanf("%d",&day);
	
	while (xday < day+1)
	{
		money = money + xday * xday ;
		xday++;
	}
	printf("%d",money);
	
	return 0;
}
