#include<stdio.h>
int main(void)
{
	int array[40];
	int i;
	
	for(i=0;i<8;i++)
	{
		scanf("%d",&array[i]);
	 } 
	for(i=7;i>=0;i--)
	{
		printf("%d\n",array[i]);
	}
	
	return 0;
}
