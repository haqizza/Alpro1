#include<stdio.h>
#include<stdlib.h>
typedef struct{
        int i;
        char c;
        float f;
    }var;
int main(){
    var x;
    char a;

    scanf("%d", &x.i);
    scanf(" %c", &x.c);
    scanf("%f", &x.f);
    scanf(" %c", &a);

    switch(a){
        case 'A' : 
            printf("%d\n%c\n", x.i, x.c);
            break;
        
        case 'B' : 
            printf("%c\n%f\n", x.c, x.f);    
            break;
        
        case 'C' : 
            printf("%d\n%f\n", x.i, x.f);   
            break;
        
        default :
            printf("%d\n%c\n%.2f\n", x.i, x.c, x.f);
            break;
    }
	
	system("pause");
	return 0;
}
