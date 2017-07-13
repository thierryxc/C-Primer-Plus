#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int count_a = 0;
	int count_b = 0;
	char ch;
	
	while((ch = getchar()) != EOF)
	{
		if(!ispunct(ch) && !isblank(ch))
		    count_a++;
		if(isblank(ch))
		    count_b++;
	}
	printf("%d %d ave is %.2f\n",count_a,count_b,((float)count_a) / (count_b+1 ));
	
	return 0;
}
