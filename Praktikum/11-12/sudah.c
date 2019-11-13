#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,i,j;
    int l=0;
    char x[20];
    char y[1];

    do{
        scanf("%s",x);
        if((strlen(y)<strlen(x))&&(strcmp(x,"sudah") != 0)){
            strcpy(y,x);
        }
        printf("%s %s\n",x,y);
        printf("%d %d\n",strlen(y),strlen(x));
    }while(strcmp(x,"sudah") != 0);
    

    printf("=================\n");
    printf("%s\n",y);

    system("pause");
    return 0;
}
