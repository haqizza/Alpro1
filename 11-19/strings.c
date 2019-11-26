#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,j;

    scanf("%d",&n);
    char a[n][50];

    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<strlen(a[i]);j++){
            printf("%c %c",a[i][j]);
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}