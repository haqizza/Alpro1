#include<stdio.h>
#include<stdlib.h>
typedef struct{
        int x;
        int y;
    }pecahan;
int main(){
	pecahan a,b,hasil;

    printf("Masukkan Pembilang Pertama: ");
    scanf("%d", &a.x);
    printf("Masukkan Penyebut Pertama: ");
    scanf("%d", &a.y);
    printf("Masukkan Pembilang Kedua: ");
    scanf("%d", &b.x);
    printf("Masukkan Penyebut Kedua: ");
    scanf("%d", &b.y);

    hasil.x = a.x*b.y;
    hasil.y = a.y*b.x;

    printf("Hasil: %d '/' %d\n", hasil.x, hasil.y);
	
	system("pause");
	return 0;
}
