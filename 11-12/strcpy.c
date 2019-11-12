#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b,i;
    scanf("%d",&a);
    char x[a];
    char y[a];

    scanf("%s",&x);
    
    strcpy(y,x);
    
    printf("%s\n",y);
    
    for(i=0;i<strlen(y);i++){
        printf("%c\n",y[i]);
    }  

    system("pause");
    return 0;
}
