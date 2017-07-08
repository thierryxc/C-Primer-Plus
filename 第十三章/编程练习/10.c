#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 257

int main(int argc, char *argv[])
{
	char words[MAX];
	FILE *fp;
	
	if (argc != 3)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
    }
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	
	while (fgets(words,MAX,fp) !=NULL)
	{
		if (strstr(words,argv[1]) != NULL)
		    fputs(words,stdout);
	}
	
	return 0;
    
 } 
