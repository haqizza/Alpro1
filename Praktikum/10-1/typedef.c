#include<stdio.h>
#include<stdlib.h>
typedef struct{
        int a;
        char b;
    }bungkusan;
int main(){
	bungkusan satu;
    bungkusan dua;
    
    scanf("%d %d", &satu.a,&dua.a);
    scanf(" %c %c", &satu.b,&dua.b);

    printf("%d%c %d%c\n", satu.a, satu.b, dua.a, dua.b);
	
	system("pause");
	return 0;
}
