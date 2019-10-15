#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int a=0;
    scanf("%d",&n);
    int x[n];
    float hasil,tampung;

    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }

    for(i=0;i<n;i++){
        tampung+=x[i];
    }
    hasil=tampung/n;

    printf("Rata-rata: %.2f\n", hasil);
    system("pause");
	return 0;
}