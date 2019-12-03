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
    }

    for(i=0;i<n;i++){
        if(strlen(a[i])%2==0){
            printf("%s\n",a[i]);
        }
    }
    
    system("pause");
    return 0;
}