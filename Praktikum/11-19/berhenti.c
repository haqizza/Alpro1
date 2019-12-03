#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int m,j;
    int i=0;
    int n=0;

    char a[50][50];

    while(strcmp(a[i-1],"berhenti")!=0){
        scanf("%s",a[i]);
        n++;
        i++;
    }
    n--;
    
    for(i=0;i<n;i++){
        printf("%s\n",a[i]);   
    }
    
    system("pause");
    return 0;
}