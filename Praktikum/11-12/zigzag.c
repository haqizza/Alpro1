#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,i,j;
    int n;
    scanf("%d",&n);
    char x[n];
    char y[n];

    scanf("%s",&x);
    
    for(i=0;i<strlen(x);i++){
        y[i]=x[n-1];
        n--;
    }
    j=(strlen(x)/2);
    for(i=0;i<(strlen(x)/2);i++){
        printf("%c",y[i]);
        printf("----");
        printf("%c\n",y[j]);
        j++;
    }  

    system("pause");
    return 0;
}
