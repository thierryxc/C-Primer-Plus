#include<stdio.h>
int count = 0;
int use_me(void);

int main(void)
{
	int m,n,i;
	printf("How many times do you want(0 to quit):\n");
	while (( n = scanf("%d",&m)) ==1 && m > 0 )
	{
		for (i = 0; i < m; i++)
		{
            use_me();
		}
		printf("The function has been used for %d times.\n",use_me()-1);
		count = 0;
		printf("How many times do you want(0 to quit):\n");
	}
	
	return 0;
}

int use_me(void)
{
	count++;
	return count;
}
