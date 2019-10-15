#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,max,min;

    scanf("%d",&n);
    int x[n];

    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }

    max=x[0];
    min=x[0];
    for(i=0;i<n;i++){
        if(max < x[i]){
            max=x[i];
        }
        if(min > x[i]){
            min=x[i];
        }
    }

    printf("Max : %d\n", max);
    printf("Min : %d\n", min);
    system("pause");
	return 0;
}