#include<stdio.h>
double min(double x,double y);

int main(void)
{
	double a,b,mi;
	
	printf("Enter two numbers:\n");
	while((scanf("%lf %lf",&a,&b) == 2))
	{
		mi = min(a,b);
		printf("the small one is : %.2f\n",mi);
		printf("Enter two numbers:\n");
	}
	
	printf("888");
	
	return 0;
}

double min(double x,double y)
{
	double min;
	
	if ( x < y)
	   min = x;
	else
	   min = y;
	
	printf("%f",min);
	
	return min;
	
}
