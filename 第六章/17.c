#include<stdio.h>
int main(void)
{
	float money = 1000000;
	const float rate = 0.08;
	int year = 0;
	
	while(money > 0)
	{
		money=money+money*rate-100000;
		++year;
	}
	printf("%d",year);
	
	return 0;
 } 
