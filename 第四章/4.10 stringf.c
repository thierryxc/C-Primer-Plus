#include<stdio.h>
#define P "you are a dd."
int main(void)
{
	printf("[%2s]\n",P);
	printf("[%24s]\n",P);
	printf("[%24.3s]\n",P);
	printf("[%-24.3s]\n",P);//.3��ʾ���ǰ�����ַ� 
	
	return 0;
	
 } 
