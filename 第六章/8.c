#include<stdio.h>
int main(void)
{
	float numb1,numb2;
	
	printf("enter two float:");
	while(scanf("%f%f",&numb1,&numb2)==2)
	{
		printf("%f\n",(numb1-numb2)/(numb1*numb2));
		printf("next tow:");
	}
	printf("888");
	return 0;
}
