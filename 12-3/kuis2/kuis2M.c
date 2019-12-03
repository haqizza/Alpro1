#include"kuis2.h"

spaceElec(int n,int space,char a[n][50]){
    int x,y,i;
    for(i=0;i<n;i++){
        x = strlen(a[i]);
        y = strlen(a[i-1]);
        if(x>space){
            space = x;
        }
    }
}

arrayPrint(int n,int space,char a[n][50]){
    int i,j,ps;
    for(i=0;i<n;i++){
        ps = space - strlen(a[i]);
        for(j=0;j<ps;j++){
            printf(" ");
        }
        printf("%s\n",a[i]);
    }
}