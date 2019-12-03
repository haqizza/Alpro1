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
        scanf("%s",a[i]);
        if(i>0){
            space=space+strlen(a[i]);
        }
    }

    for(i=0;i<n;i++){
        for(m=0;m<space;m++){
            printf(" ");
        }
        space=space-strlen(a[i+1]);
        printf("%s",a[i]);
        
        printf("\n");
    }

    system("pause");
    return 0;
}