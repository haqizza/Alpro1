#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,a,b,c;
    
    scanf("%d", &n);
    int x[n];
    int y[n];
    b=n-1;

    for(i=0;i<n;i++){
        scanf("%d", &x[i]);
    }
    
    for(a=0;a<=n;a++){
        y[b]=x[a];
        b--;
    }
    for(i=0;i<n;i++){
        printf("%d",y[i]);
        c=y[i]%2;
        switch(c){
            case 0:{printf("A");break;}
            case 1:{printf("B");break;}
        }

    }
    
    system("pause");
	return 0;
}