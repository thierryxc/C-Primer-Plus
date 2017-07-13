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
{   
    if (n == 0 && p==0)
    {
    	printf("invlid value!\n");
    	return 0;
	}
	else if (p == 0)
	    return 1;
	else if (n == 0)
	    return 0;
	else if (p == 1)
	    return n;
	else if (p > 0)
	    return n * power(n,p-1);
	else if (p == -1)
	    return 1 / n;
	else
	    return (1 / n) * pow(n,p+1);
}
