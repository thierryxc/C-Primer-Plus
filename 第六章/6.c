#include<stdio.h>
int main(void)
{
	int min,max,i;
	
	printf("enter min and max:");
	scanf("%d%d",&min,&max);
	
	for(i=min;i<=max;i++)
	{
		printf("%10d%10d%10d\n",i,i*i,i*i*i);
	}
	return 0;
}
