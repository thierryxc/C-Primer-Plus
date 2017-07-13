#include<stdio.h>
int main(void)
{
	int i,sign,times;
	double y1,y2;
	
	printf("enter the times:");
	scanf("%d",&times);
	while(times>0)
	{
	
     	y1=0;
	    y2=0;
	    sign=1;
	    for (i=1;i<=times;i++,sign=sign*(-1))
	    {
		    y1 += 1.0 / (double)i;
		    y2 +=sign*(1.0 / (double)i);
		
	    }
	    printf("%lf\n%lf\nnext:",y1,y2);
		scanf("%d",&times);
    }
	
	return 0;
}
