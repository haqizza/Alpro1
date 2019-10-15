#include<stdio.h>
#include<stdlib.h>
int main(){
    int array[0];
    int i;

    for(i=0;i<10;i++){
        array[i]=i;
    }
    for(i=0;i<10;i++){
        printf("%d", array[i]);
    }

    system("pause");
	return 0;
}