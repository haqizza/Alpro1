#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i,j;
    int m=0;
    int l=0;

    scanf("%d",&n);
    char a[n][50];

    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
    }

    for(i=0;i<n;i++){
        m=0;
        for(j=0;j<strlen(a[i]);j++){
            if(a[i][j]=='a'){
                m++;
            }
        }
        if(m>0){
            l++;
        }
    }

    if(l==n){
        printf("Semua memiliki 'a'\n");
    }else{
        printf("Tidak semua memiliki 'a'\n");
    }
    
    system("pause");
    return 0;
}