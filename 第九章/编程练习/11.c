#include<stdio.h>
int Fibonacci(int n);

int main(void)
{
	int x,y;
	
	printf("enter the x for Fib:");
	while(scanf("%d",&x) == 1)
	{
	    y = Fibonacci(x);
		printf("Fib(%d) = %d\n",x,y);
		printf("enter the x for Fib:");
			
	}
	
	printf("88");
	
	return 0;
}

int Fibonacci(int n)
{
	int fib1,fib2,fib;
	int i;
	
	if (n==1 || n==2)
	{
		fib = 1;
		return fib;
	}
	else
	{   
	    fib1 = 1;
	    fib2 = 1;
		for (i = 3; i <= n;i++)
		{
			fib = fib1 + fib2;
			fib1 = fib2;
			fib2 = fib;
			
		}
		return fib;
	}
}
