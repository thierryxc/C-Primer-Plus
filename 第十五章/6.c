#include<stdio.h>

struct option {
	unsigned int id : 8;
	unsigned int size : 7;
	unsigned int pos : 2;
	unsigned int b : 1;
	unsigned int i : 1;
	unsigned int u : 1;
	
};

char getchioce(void);
void show_zt(struct option *op);

void c_font(struct option *op);
void c_size(struct option *op);
void c_alingn(struct option *op);
void bold(struct option *op);
void italic(struct option *op);
void underline(struct option *op);

int main(void)
{
	struct option op;
	char ch;
	
	op.id = 1;
	op.size = 12;
	op.pos = 0;
	op.b = 0;
	op.i = 0;
	op.u = 0;
	
	show_zt(&op);
	while((ch = getchioce()) != 'q')
	{
		switch (ch)
		{
			case 'f': c_font(&op); break;
			case 's': c_size(&op); break;
			case 'a': c_align(&op); break;
			case 'b': bold(&op); break;
			case 'i': italic(&op); break;
			case 'u': underline(&op); break;
			case 'q': break;
			default : puts("Error input!");
			          break;
		}
	    show_zt(&op);
	}
	
	puts("done.");
	
	return 0;
 } 
 
char getchioce(void)
{
	char chioce;
	
	puts("f)change font s)change size a)change alignment");
    puts("b)toggle bold i)toggle italic u)toggle underline");
    puts("q)quit");
    
    chioce = getchar();
    while (getchar() != '\n')
        continue;
    
    return chioce;
	
 } 
 
 void show_zt(struct option *op)
 {
 	printf("\n%4s %4s %9s %3s %3s %3s\n",
"ID", "SIZE", "ALIGNMENT", "B", "I", "U");
    printf("%4lu %4lu", op->id,op->size);
    switch(op->pos)
    {
        case 0 : printf("%7s", "left"); break;
        case 1 : printf("%7s", "right"); break;
        case 2 : printf("%7s", "center"); break;
        default : printf("%7s", "unknown"); break;
    }
    printf("%8s %3s %3s\n\n", (op->b) == 1 ? "on" : "off",(op->i) == 1 ? "on" : "off",(op->u) == 1 ? "on" : "off");
    
 }
 
 void c_font(struct option *op)
 {  
    int n;
 	puts("Enter the font ID£¨0 ~ 255£©:");
 	scanf("%d",&n);
 	op->id = n;
 	 while (getchar() != '\n')
        continue;
 }
 
 void c_size(struct option *op)
 {  
    int n;
 	puts("Enter the font size£¨0 ~ 127£©:");
 	scanf("%d",&n);
 	op->size = n;
 	 while (getchar() != '\n')
        continue;
 }
 
 void c_align(struct option *op)
 {  
    int n;
 	puts("Enter the font alignment£¨0 ~ 2£©:");
 	scanf("%d",&n);
 	op->pos = n;
 	 while (getchar() != '\n')
        continue;
 }
 
 void bold(struct option *op)
 {  
    if (op->b == 1)
        op->b = 0;
    else
        op->b = 1;
 }
 
 void italic(struct option *op)
 {  
    if (op->i == 1)
        op->i = 0;
    else
        op->i = 1;
 }
 
 void underline(struct option *op)
 {  
    if (op->u == 1)
        op->u = 0;
    else
        op->u = 1;
 }
 

 
