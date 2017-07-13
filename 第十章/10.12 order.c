#include<stdio.h>


int main(void)
{
	int data[2] = { 100 , 200};//只给前两个赋值 最后一个为0 
    int moredata[2] = { 300 , 400};
	int *p1,*p2,*p3;
	
	p1 = p2 = data;//data 相当于 &data[0] 是一个地址 
	p3 = moredata;
	
	printf("   *p1 = %d,    *p2 = %d    *p3 = %d\n",*p1,*p2,*p3);
	printf(" *p1++ = %d,  *++p2 = %d (*p3)++= %d\n",*p1++,*++p2,(*p3)++); 
	printf("   *p1 = %d,    *p2 = %d    *p3 = %d\n",*p1,*p2,*p3);
	
	return 0;
	
 } 
