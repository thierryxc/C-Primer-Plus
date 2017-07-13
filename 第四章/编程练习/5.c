#include<stdio.h>
int main(void)
{
	float speed,file;
	
	printf("enter thr speed and the file:");
	scanf("%f%f",&speed,&file);
	printf("at speed of %.2f,a file of %.2f\ndownload at %.2f.\n",speed,file,file/speed);
	
	return 0;
}
