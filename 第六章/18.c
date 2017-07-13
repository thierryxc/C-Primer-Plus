#include<stdio.h>
int main(void)
{
	int firend=5;
	int i;
	
	for(i=1;firend<150;i++)
	{
		firend=(firend-i)*2;
		printf("%10d%10d\n",i,firend);
	}
	
	return 0;
}
