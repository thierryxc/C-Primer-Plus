#include<stdio.h>
#include"pe12-3a.h"
int main(void)
{
	int mode;
	float distance, fuel;
	int m;

	
	printf("Enter 0 for metric mode, 1 for US mode:");
	scanf("%d",&mode);
    while (mode >= 0)
    {
    	m = set_mode(mode);
    	get_info(m,&distance,&fuel);
        
    	show_info(m, distance, fuel);
    	printf("Enter 0 for metric mode, 1 for US mode( -1 to quit):");
    	scanf("%d",&mode);
	}
	printf("Done.\n");
	return 0;
}
