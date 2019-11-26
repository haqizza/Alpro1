#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,j;
    int m=0;

    scanf("%d",&n);
    char a[n][50];

    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<strlen(a[i]);j++){
            if(a[i][j]=='a'){
                m++;
            }
        }
    }
    
    printf("%d\n",m);
    
    system("pause");
    return 0;
}