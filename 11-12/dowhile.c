#include<stdio.h>
#include<stdlib.h>
int main(){
    char x;

    do{
        printf("apakah Anda akan berputar lagi? (y/t)\n");
        scanf(" %c",&x);
    }while(x=='y');
    system("pause");
    return 0;
}
