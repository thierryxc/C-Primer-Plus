#include<stdio.h>
int main(void)
{
	int r,c;
	
	for(r = 0;r < 6;r++)
	{
		for(c = 0;c <= r;c++)
		{
			printf("%c",'F'-c);
		}
		printf("\n");
	}
	
	return 0;
}
