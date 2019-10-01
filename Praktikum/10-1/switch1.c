#include<stdio.h>
#include<stdlib.h>
int main(){

	int x;
    scanf("%d",&x);

    switch(x){
        case 1 : 
            printf("A\n");
            break;
        
        case 2 : 
            printf("B\n");
            break;
        
        case 3 : 
            printf("C\n");
            break;
        
        default : 
            printf("D\n");
            break;
        
    }
	
	system("pause");
	return 0;}
