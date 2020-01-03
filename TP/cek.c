#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char n,i,x;
    scanf(" %d",&n);

    int cha[n];
    char cha1[n];

    while(i<n){
        scanf(" %c",&cha[i]);
        cha1[i] = cha[i];
        i++;
    }

    for(i=0;i<n;i++){
        printf("%d\n",cha1[i]);
    }
    

    system("pause");
    return 0;
}