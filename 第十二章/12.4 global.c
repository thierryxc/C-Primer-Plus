//ʹ���ⲿ����
#include<stdio.h>
int units = 0; //�ⲿ����
void critic(void);

int main(void)
{
	extern int units;//���Բ����ظ�����
	
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d",&units);
	while(units != 56)
	    critic();
	printf("you must have look it up!\n");
	
	return 0; 
 } 
 
 void critic(void)
 {
 	//�����ظ�����unitsҲ����
	 printf("No luck, my firend. Try again.\n");
	 scanf("%d",&units); 
 }
