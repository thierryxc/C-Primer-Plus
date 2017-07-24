#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct names {
	char first[40];
	char last[40];
};

int comp(const void *p1,const void *p2);

int main(void)
{
	struct names people[4] = {
		{ "dxc", "xcv" },
		{ "cxc", "dcv" },
		{ "axc", "acv" },
		{ "bxc", "xcv" }
	};
	
	qsort(people, 4, sizeof(struct names), comp);
	
	int i;
	
	for (i = 0; i < 4; i++)
	    printf("%s %s\n",people[i].first, people[i].last);
	    
	return 0;
}

int comp(const void *p1,const void *p2)
{
	const struct names *a1 = (const struct names *) p1;
	const struct names *a2 = (const struct names *) p2;
	
	int res = strcmp(a1->last,a2->last);
	if (res != 0)
	    return res;
	else
	    return strcmp(a1->first,a2->first);
}
