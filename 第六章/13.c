#include<stdio.h>
#include<math.h>
int main(void)
{
	int array[8],i;
	
	for(i=0;i<8;i++)
	{
		array[i] = pow(2,i+1);
	}
	i=7;
	do
	{
		printf("%d\n",array[i]);
		i--;
		
	}while(i>=0);
	
	return 0;
}
