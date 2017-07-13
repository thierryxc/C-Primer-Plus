#include<stdio.h>
const int H_M = 60;
int main(void)
{
	int xmin,min,hour;
	
	printf("enter a min(0 to exit):");
	scanf("%d",&xmin);
	while (xmin > 0)
	{
	    hour = xmin / H_M;
		min = xmin % H_M;
		
		printf("your time is %d hour %d min.\n",hour,min);
		printf("enter a min(0 to exit):");
	    scanf("%d",&xmin);	
	}
	printf("8888888");
	
	return 0;
  }  
