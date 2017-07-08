#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 81
int max(int, int);

int main(int argc, char *argv[])
{
	FILE *fa, *fb;
	char ch_a, ch_b;

	if (argc != 3)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fa = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
    if ((fb = fopen(argv[2], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
    ch_a = getc(fa);
    ch_b = getc(fb);
    while (ch_a != EOF || ch_b != EOF)
    {
    	while ( ch_a != EOF && ch_a !='\n')
    	{
    		putchar(ch_a);
    		ch_a = getc(fa);
		}
		if (ch_a != EOF)
		{
		
			ch_a = getc(fa);
		}
		while ( ch_b != EOF && ch_b !='\n')
    	{
    		putchar(ch_b);
    		ch_b = getc(fb);
		}
		if (ch_b != EOF)
		{
		
			ch_b = getc(fb);
		}
		putchar('\n');
	}
	if (fclose(fa) != 0 )
	    printf("Can't close file %s.\n",argv[1]);
	if (fclose(fb) != 0 )
	    printf("Can't close file %s.\n",argv[2]);	
	
	return 0;
}

