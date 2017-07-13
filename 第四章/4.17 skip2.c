#include<stdio.h>
int main(void)
{
    int n;
	printf("enter 3 numb:");
	scanf("%*d %*d %d",&n);//*作用是跳过 
	printf("the last is %d",n);
	
	return 0; 
}
