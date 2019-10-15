#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int a=0;
    scanf("%d",&n);
    int array[n];

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]%2==1){
            printf("%d", array[i]);
            a++;
        }
    }
    printf("Bayaknya elemen ganjil: %d\n", a);
    system("pause");
	return 0;
}