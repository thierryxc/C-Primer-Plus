#include<stdio.h>
#define P "you are a dd."
int main(void)
{
	printf("[%2s]\n",P);
	printf("[%24s]\n",P);
	printf("[%24.3s]\n",P);
	printf("[%-24.3s]\n",P);//.3表示输出前三个字符 
	
	return 0;
	
 } 
