/* 两种方式显示float类型的值 */
#include<stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;//失败 
	
	printf("%f can be write as %e\n",aboat,aboat); 
	printf("and it's %a in hex\n",aboat);//十六进制 
	printf("%f can be write as %e\n",abet,abet);
	printf("%Lf can be write as %Le\n",dip,dip);
	
 } 
