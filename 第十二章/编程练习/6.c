#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int seed ;
	int i,digit,count;
	count = 0;
	
	
	while (count < 10)
	{
	    scanf("%d",&seed);//通过运行可以发现seed值相同时得到的数字出现次数也相同！！ 
		srand(seed);
		int count_1 = 0;
		int count_2 = 0;
		int count_3 = 0;
		int count_4 = 0;
		int count_5 = 0;
		int count_6 = 0;
		int count_7 = 0;
		int count_8 = 0;
		int count_9 = 0;
		int count_10 = 0;
		for( i = 0; i < 1000; i++)
		{
		    digit = rand() % 10 + 1;
		    switch (digit)
		    {
		    	case 1: count_1++;
		    	        break;
		    	case 2: count_2++;
		    	        break;
		    	case 3: count_3++;
		    	        break;
		    	case 4: count_4++;
		    	        break;
		    	case 5: count_5++;
		    	        break;
		    	case 6: count_6++;
		    	        break;
		    	case 7: count_7++;
		    	        break;
		    	case 8: count_8++;
		    	        break;
		    	case 9: count_9++;
		    	        break;
		    	case 10: count_10++;
		    	        break;
			}
		
		
	    }
	    printf("1: %d  2: %d  3: %d  4: %d  5: %d  6: %d  7: %d  8: %d  9: %d  10: %d  \n",count_1, count_2, count_3, count_4, count_5, count_6, count_7, count_8, count_9, count_10);
			
		count++;
		
	}
	return 0;
}
