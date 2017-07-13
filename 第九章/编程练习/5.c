#include<stdio.h>
void large_of( double * x,double * y);

int main(void)
{
	double a, b;
	
	printf("enter two num:\n");
	while((scanf("%lf%lf",&a,&b)) == 2)
	{
		large_of( &a,&b);
		printf("the  large a is : %.2lf %.2lf\n",a,b);
		printf("enter two num:\n");
	}
	printf("done\n");
	
	return 0;
}

void large_of( double * x,double * y)
{
	if(*x > *y)
	    *y = *x;
	
	else
	    *x = *y; 
}
