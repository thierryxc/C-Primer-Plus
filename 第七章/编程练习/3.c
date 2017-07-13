#include<stdio.h>
int main(void)
{
	int x;
	int ou = 0;
	int ji = 0;
	int count_ou = 0;
	int count_ji = 0;
	
	while(scanf("%d",&x))
	{
		if (x == 0)
		    break;
		if (x % 2 == 0)
		   {
		   	ou++;
		   	count_ou +=x;
		   }
		else
		{
			ji++;
			count_ji += x;
		}
	}
	printf(" ou %d ave %f ji %d ave %f\n",ou,((float)count_ou / ou),ji,((float)count_ji / ji));
	
	return 0;
}
