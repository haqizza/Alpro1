#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,x,i,max;
    int a=0;
    scanf("%d",&n);
    int array1[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    scanf("%d",&x);
    int array2[x];
    for(i=0;i<n;i++){
        scanf("%d",&array2[i]);
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