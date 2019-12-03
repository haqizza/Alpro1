#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,j,k,m;
    int l=0;
    int space=0;

    scanf("%d",&n);
    char a[n][50];

    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
    }

    for(i=0;i<n;i++){
        for(m=0;m<space;m++){
            printf(" ");
        }
        for(j=0;j<strlen(a[i]);j++){
            printf("%c",a[i][j]);
            space++;
        }
        printf("\n");
    }

    system("pause");
    return 0;
}