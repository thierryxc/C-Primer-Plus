#include<stdio.h>
#include<stdlib.h>
int bstoi(const char *p);
char * s_gets(char *st, int n);
char * itobs(int, char *);

int main(int argc,char * argv[])
{
	int v1;
	
	int v2;
	char bstr[8 * sizeof(int) + 1];
	
    if (argc != 3)
	{
		fprintf(stderr, "Usage: %s binarynum1 binarynum2\n", argv[0]);
        exit(EXIT_FAILURE);
		}
	
	v1 = bstoi(argv[1]);
	
	v2 = bstoi(argv[2]);
	
	printf("%d %d\n",v1,v2);
	
	printf("~ %s is %s\n",argv[1], itobs(~v1,bstr));
	printf("~ %s is %s\n",argv[2], itobs(~v2,bstr));
	printf("%s & %s is %s\n",argv[1], argv[2], itobs(v1&v2,bstr));
	printf("%s | %s is %s\n",argv[1], argv[2], itobs(v1|v2,bstr));
	printf("%s ^ %s is %s\n",argv[1], argv[2], itobs(v1^v2,bstr));
	
	return 0;
	
		
		
}

int bstoi(const char *p)
 {
 	int val = 0;
 	while(*p != '\0')
 		val = val * 2 + (*p++ - '0');
	
	return val;
 }
 
 char * itobs(int n, char * ps)
{
    int i;
    static int size = 8 * sizeof(int);
    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';
    return ps;
}
