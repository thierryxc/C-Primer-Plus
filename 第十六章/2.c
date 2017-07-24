#include<stdio.h>

#define DAO(X) 1/(X)
#define AVE(X,Y) ((X)+(Y))/2

int main(void)
{
	float n1,n2;
	float ans;
	puts("Enter two numbers (q to quit):");
	while (scanf("%f%f",&n1,&n2) == 2)
	{
		ans = DAO(AVE(DAO(n1),DAO(n2)));
		printf("%.2f\n",ans); 
		puts("Next two (q to quit):");
	}
	
	puts("done.");
	
	return 0;
	 
}
