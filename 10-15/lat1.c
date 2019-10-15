#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,max;
    int a=0;
    scanf("%d",&n);
    int array[n];

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    max = array[0];
    for(i=0;i<n;i++){
        if(array[i]%2==1){
            if(max < array[i]){
                max=array[i];
            }
        }
    }
    printf("\nMax elemen ganjil: %d\n", max);
    system("pause");
	return 0;
}