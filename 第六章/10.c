#include<stdio.h>
int main(void)
{
	int min,max,res,i;
	
	printf("enter two numbs:");
	scanf("%d%d",&min,&max);
	while(min<max)
	{
		res=0;
		for(i=min;i<=max;i++)
		{
			res+=i*i;
			
		}
	 printf("The sum of squares from %d to %d is %d\n",min*min,max*max,res );
	 printf("next two:");
	 scanf("%d%d",&min,&max);	
	}
	printf("888");
	return 0;
}
