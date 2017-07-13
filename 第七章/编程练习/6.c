#include<stdio.h>
int main(void)
{
	char c,pre,now;
	int count = 0;
	
	
	printf("enter a text:") ;
	while((c = getchar()) != '#')
	{
		pre = now;
		now = c;
		if (pre =='e' && now =='i')
		    count++;
	}
	
	printf("count:%d",count);
	
	return 0;
}
