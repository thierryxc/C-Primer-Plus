#include<stdio.h>
#include<ctype.h>

int main(int argc, char *argv[]) 
{
	
	if (argc != 2)
	    printf("error input!\n");
	else if (isdigit(argv[1]))
	    {
		printf("%d\n",argv[1]);
	    return (int)argv[1];
	}
	else
	    return 0;
	    
}
