#include<stdio.h>
double ave(double x ,double y);

int main(viod)
{
	double a ,b;
	
	printf("enter two num:\n");
	while((scanf("%lf%lf",&a,&b)) == 2)
	{
		printf("the  tiaohe ave is : %.2lf\n",ave(a,b));
		printf("enter two num:\n");
	}
	printf("done\n");
	
	return 0;
}

double ave(double x ,double y)
{
	
	return 1 / ((1 / x + 1 / y) / 2);
}
