#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int num;
	int div,n;
	bool isPrime;
	
	printf("enter a num:");
	scanf("%d",&num);
	if(num > 1)
	{
		for(n = 2;n <= num;n++)
		{   
		    isPrime = true;
			for(div = 2; div * div <= n;div++ )
			{
				if(n % div == 0)
				    {
					isPrime = false;
				    break;
				}
			}
			if(isPrime == true)
			   printf("%d\n",n);
		}
	}
	else 
	    printf("none");
	    
	    
	return 0;
}
