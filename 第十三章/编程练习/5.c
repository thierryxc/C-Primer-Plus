//把文件附加到另一个文件末尾
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);


int main(int argc, char *argv[])
{
	FILE *fa, *fs;//fa指向目标文件，fs指向源文件 
	int files = 0;//附加文件的数量 
	
	int ch;
	int i;
	
	
	if ((fa = fopen(argv[1], "a+")) == NULL)
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)//创建一个缓冲区 
	{
		fputs("Cant't create output buffer\n",stderr);
		exit(EXIT_FAILURE);
	}
	for (i = 1; i < argc; i++)
	{
		if (strcmp (argv[1],argv[i]) == 0)
		    fputs("Can't append file to itself\n",stderr);
		else if ((fs = fopen(argv[i], "r")) == NULL)
		    fprintf(stderr, "Can't open %s\n", argv[i]);
		else
		{
			if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("Cant't create input buffer\n",stderr);
				continue;
			}
		append(fs,fa);
		if (ferror(fs) != 0)//测试错误指示符 
		    fprintf(stderr,"Error in reading file %s.\n",argv[i]);
		if (ferror(fa) != 0)
		    fprintf(stderr,"Error in reading file %s.\n",argv[1]);
		fclose(fs);
		files++;
		printf("File %s appended.\n",argv[i]);
		}
	}
	printf("Done appending. %d files appended.\n",files);
	rewind(fa);
	printf("%s contents:\n",argv[1]);
	while((ch = getc(fa)) != EOF)
	    putchar(ch);
	puts("\nDone displaying.");
	fclose(fa);
	
	return 0;
 }

void append(FILE *source, FILE *dest)
{
	size_t bytes;
	static char temp[BUFSIZE];
	
	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)//把4096个char类型的值从source输入temp中 
	    fwrite(temp, sizeof(char), bytes, dest);//把temp中的值写入dest中 
 } 
 

