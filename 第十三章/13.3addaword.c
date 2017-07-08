//使用fprintf（）、fscanf（）、和rewind（）
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 41

int main(void)
{
	FILE *fp;
	char words[MAX];
	
	if ((fp = fopen("wordy", "a+")) == NULL)//使用a模式可对文件进行读写 
	{
		fprintf(stdout, "Can't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	 } 
	
	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");
	while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
	    fprintf(fp,"%s\n", words);//把单词加换行符写入fp指向的位置 
	    
	puts("File contents:");
	rewind(fp);//回到文件开始出 
	while (fscanf(fp, "%s", words) == 1)//从fp指向的位置读取字符串放入words内（遇到换行符就算一个） 
	    puts(words);
	puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Error closing file.\n");
        
    return 0;
 } 
