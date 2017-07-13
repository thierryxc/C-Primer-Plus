#include<stdio.h>
void exchange(double * x,double * y,double * z);

int main(void)
{
	double a, b, c;
	
	printf("enter 3 num:\n");
	while((scanf("%lf%lf%lf",&a,&b,&c)) == 3)
	{
		exchange( &a,&b,&c);
		printf("the  large a is %.2lf ,mid is %.2lf.min is %.2lf\n",a,b,c);
		printf("enter two num:\n");
	}
	printf("done\n");
	
	return 0;
}

void exchange(double * x,double * y,double * z)
{
	double temp;
	
	if( *x < *y && *y < *z )
	{
		temp = *x;
		*x = *z;
		*z = temp;
		
	}
	if( *x < *z && *z < *y )
	{
		temp = *x;
		*x = *y;
		*y = temp;
		temp = *z;
		*z = *y;
		*y = temp;
	}
	if( *y < *x && *x < *z )
	{
		temp = *x;
		*x = *z;
		*z = temp;
		temp = *z;
		*z = *y;
		*y = temp;
	}
	if( *y < *z && *z < *x )
	{
		temp = *z;
		*z = *y;
		*y = temp;
	}
	if( *z < *x && *x < *y )
	{
	    temp = *x;
		*x = *y;
		*y = temp;	
	}
}
