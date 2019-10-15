#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,max,min,inMax,inMin;

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
            inMax=i;
        }
        if(min > x[i]){
            min=x[i];
            inMin=i;
        }
    }

    printf("Max : %d indeks ke %d\n", max, inMax);
    printf("Min : %d indeks ke %d\n", min, inMin);
    system("pause");
	return 0;
}