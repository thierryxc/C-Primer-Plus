#include<stdio.h>
#include<stdlib.h> 

int main(int argc, char *argv[])
{
	int i;
	char ch;
	FILE *fp;
	int count = 0;
	char app = argv[1][0];
	
	if (argc < 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
    }
    if (argc == 2)
	{
		fp = stdin;
		while ((ch = getc(fp)) != EOF)
		{
			if (ch == app)
			    count++;
		}
		printf("The input has %d %c.\n",count,app);
		
		return 0;
    }
    
    for ( i = 2; i < argc; i++)
    {
    	if ((fp = fopen(argv[i], "r")) == NULL)
	    {
		    printf("Can't open %s\n", argv[i]);
		    exit(EXIT_FAILURE);
	    }
	    while ((ch = getc(fp)) != EOF)
		{
			if (ch == app)
			    count++;
		}
		printf("The file %s has %d %c.\n",argv[i],count,app);
		count = 0;
	}
    return 0;
}
    
