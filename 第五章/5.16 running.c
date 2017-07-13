//包括本章大部分知识点的程序
#include<stdio.h>
const int S_PRE_M = 60;
const int S_PRE_H = 3600;
const double M_PRE_K = 0.62137;
int main(void)
{
	double distk,distm;
	double rate;
	int min,sec;
	int time;
	double mtime;
	int mmin,msec;
	
	printf("this program converts your time for a metric race to a time for running a mile and to your average speed in mile per hour\n");//把你的时间从米转换成英里
    printf("enter your distance in KM:");
	scanf("%lf",&distk);//%lf表示读取double类型值
	printf("enter time in mins and secs.\n");
	printf("first,mins:");
	scanf("%d",&min);
	printf("and secs:");
	scanf("%d",&sec);
	
	time = S_PRE_M * min + sec;
	distm = M_PRE_K * distk;
	rate = distm / time * S_PRE_H;
	mtime = (double) time / distm;
	mmin = (int) mtime / S_PRE_M;
	msec = (int) mtime % S_PRE_M;
	
	printf("you ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
	distk,distm,min,sec);
	printf("that pace corresponds to running a mile in %d min, %d sec.\n",mmin,msec);
	printf("your ave speed was %1.2f mph.\n",rate);
	
	return 0;
		 
 } 
