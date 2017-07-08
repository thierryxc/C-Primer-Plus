#include<stdio.h>
#include<stdlib.h>

#define ROWS 20
#define COLS 30
#define LEVEL 10

int diff(int a,int b);
void removed( int ar[][COLS], int rows);

int main(void)
{
	int arr1[ROWS][COLS];
	char arr2[ROWS][COLS+1];
	FILE *fp;
	char name[ROWS];
	int rows,cols;
	char ch;
	const char trans[LEVEL + 1] = " .':~*=&%#";
	
	printf("Enter the file name:");
	scanf("%s",name);
	
	if ( (fp = fopen(name,"r"))== NULL)
	{
		printf("Can not open the file %s.\n",name);
	}
	ch = getc(fp);
	for (rows = 0; rows < ROWS; rows++)
	    for (cols =0; cols < COLS; cols++)
	    {
	    	while (isspace(ch))
	    	    ch = getc(fp);
	    	arr1[rows][cols] = (int) (ch - '0');
	    	ch = getc(fp);
		}
	for (rows = 0; rows < ROWS; rows++)
    {   printf("\n");
	    for (cols =0; cols < COLS; cols++)
	        printf("%d ",arr1[rows][cols]);
    }
        printf("\n");	
	removed(arr1, 20);
	for (rows = 0; rows < ROWS; rows++)
    {   printf("\n");
	    for (cols =0; cols < COLS; cols++)
	        printf("%d ",arr1[rows][cols]);
    }
        printf("\n");
	for (rows = 0; rows < ROWS; rows++)
	    for (cols =0; cols < COLS; cols++)
	        arr2[rows][cols] = trans[arr1[rows][cols]];
    for (rows = 0; rows < ROWS; rows++) 
        arr2[rows][30] = '\0';
    for (rows = 0; rows < ROWS; rows++)
        puts(arr2[rows]);
	        
	return 0;
 } 
 
void removed( int ar[][COLS], int rows)
{
	int i,j;
	for (i = 0; i < rows; i++)
	{
	    for (j =0; j < COLS; j++)
	    {
	    	if(i != 0 && i != 19 && j != 0 && j != 29)
	    	    if ( diff(ar[i+1][j],ar[i][j]) > 1 && diff(ar[i-1][j],ar[i][j]) > 1 && diff(ar[i][j+1],ar[i][j]) > 1 && diff(ar[i][j-1],ar[i][j]) > 1 ) 
		            ar[i][j] = (ar[i+1][j] + ar[i-1][j] + ar[i][j+1] + ar[i][j-1]) / 4;
		}
    }
 } 
 
int diff(int a,int b)
{
	if (a > b)
	    return (a - b);
	else
	    return (b - a);
}
