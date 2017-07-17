#include<stdio.h>

#define ID_MASK 0xff
#define SIZE_MASK 0x7f00
#define LEFT 0x00000
#define CENTER 0x08000
#define RIGHT 0x10000
#define ALIGN_MASK 0x18000
#define REGULAR 0x00000
#define BOLD 0x20000
#define ITALIC 0x40000
#define UNDERLINE 0x80000
#define STYLE_MASK 0xE0000


char getchioce(void);
void show_zt(unsigned long);

void c_font(unsigned long*);
void c_size(unsigned long*);
void c_alingn(unsigned long*);
void bold(unsigned long*);
void italic(unsigned long*);
void underline(unsigned long*);

int main(void)
{
	unsigned long sample = 1 | 12<<8 | LEFT | BOLD  ;
	char ch;



	
	show_zt(sample);
	while((ch = getchioce()) != 'q')
	{
		switch (ch)
		{
			case 'f': c_font(&sample); break;
			case 's': c_size(&sample); break;
			case 'a': c_align(&sample); break;
			case 'b' : sample ^= BOLD; break;
            case 'i' : sample ^= ITALIC; break;
            case 'u' : sample ^= UNDERLINE; break;
			case 'q': break;
			default : puts("Error input!");
			          break;
		}
	    show_zt(sample);
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
 
 void show_zt(unsigned long f)
 {
 	printf("\n%4s %4s %9s %3s %3s %3s\n",
"ID", "SIZE", "ALIGNMENT", "B", "I", "U");
    printf("%4lu %4lu", f & ID_MASK ,(f & SIZE_MASK)>>8);
    switch(f & ALIGN_MASK)
    {
        case LEFT : printf("%7s", "left"); break;
        case CENTER : printf("%7s", "center"); break;
        case RIGHT : printf("%7s", "right"); break;
        default : printf("%7s", "unknown"); break;
    }
   printf("%8s %3s %3s\n\n", (f & BOLD) == BOLD? "on" : "off",
(f & ITALIC) == ITALIC ? "on" : "off",
(f & UNDERLINE) == UNDERLINE ? "on" : "off");
    
 }
 
 void c_font(unsigned long *f)
 {  
    int n;
 	puts("Enter the font ID£¨0 ~ 255£©:");
 	scanf("%d",&n);
 	*f &= ~ID_MASK;
 	n = n & ID_MASK;
 	*f |= n ; 
 	 while (getchar() != '\n')
        continue;
 }
 
 void c_size(unsigned long *f)
 {  
    int n;
 	puts("Enter the font size£¨0 ~ 127£©:");
 	scanf("%d",&n);
 	*f &= ~SIZE_MASK;
 	*f |=  (n<<8) & SIZE_MASK;
 	 while (getchar() != '\n')
        continue;
 }
 
 void c_align(unsigned long *f)
 {  
    int n;
    char ch;
    puts("Select alignment:");
    puts("l)left c)center r)right");

    
    ch = getchar();
    
    switch (ch)
   {
        case 'l' : *f &= ~ALIGN_MASK; *f |= LEFT; break;
        case 'c' : *f &= ~ALIGN_MASK; *f |= CENTER; break;
        case 'r' : *f &= ~ALIGN_MASK; *f |= RIGHT; break;
        default : fprintf(stderr, "alignment problem\n");
   }
 	 while (getchar() != '\n')
        continue;
 }
 
 
