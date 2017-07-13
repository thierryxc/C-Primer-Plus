#include<stdio.h>
#define BASIC 10
#define EXTRA 15

int main(void)
{
	int time;
	float rate1 = 0.15;
	float rate2 = 0.2;
	float rate3 = 0.25;
	float salay = 0;
	float tax = 0;
	float profit = 0;
	
	printf("enter the time:");
	scanf("%d",&time);
	
	if (time <= 30)
	{
	
	    salay = 10 * time;
	    tax = salay * 0.15;
	    profit = salay - tax ;
    }
    else if(time <= 40)
    {
    	salay = 10 * time;
    	tax = 300 * 0.15 + (salay - 300) * 0.2;
    	profit = salay - tax ;
	}
	else if(time <=43 )
	{
		salay = 400 + 15 * (time - 40);
		tax =  300 * 0.15 + (salay - 300) * 0.2;
		profit = salay - tax ;
	}
	else
	{
		salay = 400 + 15 * (time - 40);
		tax =  300 * 0.15 + 150 * 0.2 + (salay - 450) * 0.25;
		profit = salay - tax ;
	}
	
	printf("s:%.2f\nt:%.2f\np:%.2f\n",salay,tax,profit);
	
	return 0;
}
