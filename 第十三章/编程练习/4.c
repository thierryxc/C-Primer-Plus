#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	char ch;
	FILE *fp;
	
	if (argc < 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	for (i = 1; i < argc; i++)
	{
		if ((fp = fopen(argv[i], "r")) == NULL)
	    {
		    printf("Can't open %s\n", argv[1]);
		    exit(EXIT_FAILURE);
	    }
	    printf("File %s is:\n",argv[i]);
	    while ((ch = getc(fp)) != EOF)
            putc(ch,stdout);
        printf("\n");
	    fclose(fp);
	}
	
	return 0;
 } 
