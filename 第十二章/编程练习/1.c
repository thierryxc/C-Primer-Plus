#include<stdio.h>

int critic(int units);

int main(void)
{
    int units;
	
	printf("How many pounds to a firkin of butter?\n");
	while(units = critic(units) != 56)
	    printf("No luck, my firend. Try again.\n");
	printf("you must have look it up!\n");
	
	return 0; 
 } 
 
 int critic(int units)
 {
 	
	 
	 scanf("%d",&units); 
	 
	 return units;
 }
