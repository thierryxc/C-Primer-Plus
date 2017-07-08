#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	FILE *fa,*fs;
	char ch;
	if (argc != 3)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fs = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	} 
	if ((fa = fopen(argv[2], "w")) == NULL)
	{
		printf("Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	} 
	while ((ch = getc(fs)) != EOF)
	    putc(ch,fa);
	fclose(fa);
	fclose(fs);
	
	return 0;
}
