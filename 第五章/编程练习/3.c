#include<stdio.h>
const int H_M = 7;
int main(void)
{
	int xmin,min,hour;
	
	printf("enter days(0 to exit):");
	scanf("%d",&xmin);
	while (xmin > 0)
	{
	    hour = xmin / H_M;
		min = xmin % H_M;
		
		printf("your have %d weeks %d days.\n",hour,min);
		printf("enter days(0 to exit):");
	    scanf("%d",&xmin);	
	}
	printf("8888888");
	
	return 0;
  }  
