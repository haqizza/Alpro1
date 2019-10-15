#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int a=0;

    scanf("%d",&n);
    int x[n];

    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    
    for(i=0;i<n;i++){
            printf("%d", x[i]);
    }
    
    system("pause");
	return 0;
}