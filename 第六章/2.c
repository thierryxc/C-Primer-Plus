#include<stdio.h>
int main(void)
{
	int r,c;
	
	for(r = 0;r < 5;r++)
	{
		for(c = 0;c <= r;c++)
		{
			printf("%c",'$');
		}
		printf("\n");
	}
	
	return 0;
}
