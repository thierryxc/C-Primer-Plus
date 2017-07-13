#include<stdio.h>
int main(void)
{
	char c;
	int count = 0;
	
	printf("enter a text:") ;
	while((c = getchar()) != '#')
	{
		if(c == '.')
		{
		c = '!';
		count++;
	}
		else if(c =='!')
		 {
		  c ='!!';
		  count++;
	}
}
    printf("replace:%d\n",count);
    
    return 0;
}
