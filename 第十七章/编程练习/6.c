#include<stdio.h>
#define SIZE 20

int seekint(int mount,int arr[], int app);
int main(void)
{
	int arr[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 14, 18, 20, 24, 25, 26, 37, 48, 69, 200 };
	int n;
	
	puts("Enter the number you want to seek:");
	while (scanf("%d",&n) == 1)
	{
		if (seekint(SIZE, arr, n) == 1)
		    puts("Find it!");
		else
		    puts("Not find it.");
		puts("Enter the number you want to seek(q to quit):");
	}
	
	puts("Done.");
	
	return 0;

}

int seekint(int mount,int arr[], int app)
{
	int max = mount - 1;
	int min = 0;
	int seek = mount / 2;
	while (max - min > 1 )
	{
		if (arr[seek] == app || arr[max] == app || arr[min] == app)
		    return 1;
		else if (arr[seek] > app)
		{
			max = seek;
			seek = (max + min) / 2;
		}
		else
		{
			min = seek;
			seek = (max + min) / 2;
		}
		
		printf("%d %d %d %d\n",arr[max],arr[min],arr[seek],app);
	}
	
	return 0;
	
}
