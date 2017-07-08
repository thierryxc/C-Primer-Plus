//把文件压缩为原来的1/3
#include<stdio.h>
#include<stdlib.h>  //提供exit()原型
#include<string.h>  //提供strcpy(),strcat()的原型
#define LEN 40

int main(void)
{
	FILE *in, *out; //声明两个指向FILE的指针
	int ch;
	char name[LEN];
	int count = 0;
	char file_app[LEN];
	
    puts("Enter the file name to be reduced:");
    scanf("%s",file_app);
	//设置输入
	if ((in = fopen(file_app, "r")) == NULL)
	
	{
		fprintf(stderr, "I coundn't open the file \"%s\"\n",file_app);
		exit(EXIT_FAILURE);
	 } 
	 
	//设置输出
	strncpy(name, file_app,LEN - 5);//拷贝文件名
	name[LEN - 5] = '\0';
	strcat(name, ".red");
	if ((out = fopen(name, "w")) == NULL)
	{
		//以写模式打开文件
		fprintf(stderr, "can't create output file.\n");
		exit(3);//只要参数不是0都是异常退出 
	 } 
	//拷贝数据
	while ((ch = getc(in)) != EOF)
	    if (count++ % 3 == 0)
		    putc(ch, out);//打印3个字符中的第一个
	//收尾工作
	if (fclose(in) != 0 || fclose(out) != 0)
	    fprintf(stderr,"Error in close files.\n");
		
	return 0; 
 } 
