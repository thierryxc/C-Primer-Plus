#include<stdio.h>
int main(void)
{
	float x1[8],y1[8];
	int i,j;
	
	printf("enter 8 numbs:");
	for(i=0;i<8;i++)
	{
		scanf("%f",&x1[i]);
	 } 
	for(i=0;i<8;i++)
	{
		y1[i] = 0;
		for(j=0;j<=i;j++)
		{
			y1[i] +=x1[j] ;
		 } 
		 printf("%10f%10f\n",x1[i],y1[i]);
	}
	return 0;
}
