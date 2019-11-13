#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b;
    scanf("%d",&a);
    char x[a];

    scanf("%s",x);
    printf("%s\n",x);
    for(b=0;b<strlen(x);b++){
        printf("%c\n",x[b]);
    }  

    system("pause");
    return 0;
}
