/* ���ַ�ʽ��ʾfloat���͵�ֵ */
#include<stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;//ʧ�� 
	
	printf("%f can be write as %e\n",aboat,aboat); 
	printf("and it's %a in hex\n",aboat);//ʮ������ 
	printf("%f can be write as %e\n",abet,abet);
	printf("%Lf can be write as %Le\n",dip,dip);
	
 } 
