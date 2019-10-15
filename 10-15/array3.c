#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int array[n];

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]%2==1){
            printf("%d", array[i]);
        }
    }

    system("pause");
	return 0;
}