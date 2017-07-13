#include<stdio.h>
int main(void)
{
	int r,c,count;
	
	count = 0;
	
	for(r = 0;r < 6;r++)
	{
		for(c = 0;c <= r;c++,count++)
		{
			printf("%c",'A'+count);
		}
		printf("\n");
	}
	
	return 0;
}
