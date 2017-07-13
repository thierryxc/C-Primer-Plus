#include<stdio.h>
double power(double n,int p);

int main(void)
{
	double x,xpow;
	int exp;
	
	printf("Enter a num and a integer power(q to quit):");
	while(scanf("%lf%d",&x,&exp) == 2)
	{
		xpow = power(x,exp);
		printf("The ressult is %.5g\n",xpow);
		printf("Enter a num and a integer power(q to quit):");
	}
	printf("88");
	
	return 0;
}

double power(double n,int p)
{   int i;
    double pow = 1;
    double mpow = 1;

	if(p > 0)
	{
		for (i = 0; i < p ; i++)
		    pow *= n;
		return pow;	
	}
	else if(p == 0)
	{
		if (n == 0)
		{
			printf("invalid value!");
			pow = 0;
			return pow;
		}
		else
		    pow = 0;
			return pow;
	}
	else
	{
		if (n == 0)
		{
			printf("invalid value!");
			pow = 0;
			return pow;
		}
		else
		{
			for(i = p; i < 0; i++)
			{
			    mpow *= n;
			}
			pow = 1 / mpow;
			return pow; 	
		}
	}
}
