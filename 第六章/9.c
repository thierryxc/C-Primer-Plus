#include<stdio.h>
void townmub(float x,float y);
int main(void)
{
	float numb1,numb2;
	
	printf("enter two float:");
	while(scanf("%f%f",&numb1,&numb2)==2)
	{
		townmub(numb1,numb2);
		printf("next tow:");
	}
	printf("888");
	return 0;
}

void townmub(float x,float y)
{
	
	printf("%f\n",(x-y)/(x*y));
}
