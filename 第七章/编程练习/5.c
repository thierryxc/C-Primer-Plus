#include<stdio.h>
int main(void)
{
	char c;
	int count = 0;
	
	printf("enter a text:") ;
	while((c = getchar()) != '#')
	{
		switch(c)
		{
			case '.':
				c = '!';
				count++;
				break;
			case '!':
				c = '!!';
				count++;
				break;
		}
	}
	printf("replace:%d\n",count);
    
    return 0;
}
