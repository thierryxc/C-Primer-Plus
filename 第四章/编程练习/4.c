#include<stdio.h>
int main(void)
{
	float height;
	char name[40];
	
	printf("input your h and n:");
	scanf("%f%s",&height,name);
	printf("%s,you are %.3f tall\n",name,height/100);
	
	return 0;
}
