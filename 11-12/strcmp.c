#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b,i;
    scanf("%d",&a);
    char x[a];
    char y[a];

    scanf("%s",&x);
    scanf("%s",&y);
    
    if(strcmp(x,y)==0){
        printf("String sama\n");
    }else{
        printf("String tidak sama\n");
    }
    // how to check per huruf
    system("pause");
    return 0;
}
