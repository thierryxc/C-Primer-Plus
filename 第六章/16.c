#include<stdio.h>
#define R1 0.1;
#define R2 0.05;
int main(void)
{
	int year;
	float x1,x2,y1,y2;
	
	x1=x2=100;
	y1=y2=100;
	year=1;
	do
	{
		y1=y1+100*R1;
		y2=y2+y2*R2;
		year++ ;
	}while(y1>y2);
	printf("%f\n%f\n%d",y1,y2,year);
	
	return 0;
}
