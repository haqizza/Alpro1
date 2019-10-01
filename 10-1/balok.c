#include<stdio.h>
#include<stdlib.h>
typedef struct{
        int p;
        int l;
        int t;
        int luas;
        int vol;
    }balok;
int main(){
	balok x;

    printf("Masukkan Panjang: ");
    scanf("%d", &x.p);
    printf("Masukkan Lebar: ");
    scanf("%d", &x.l);
    printf("Masukkan tinggi: ");
    scanf("%d", &x.t);

    x.luas = ((x.p*x.l)*2)+((x.l*x.t)*2)+((x.p*x.t)*2);
    x.vol = x.p*x.l*x.t;

    printf("\nLuas Balok: %d\n", x.luas);
    printf("Volume Balok: %d\n", x.vol);
	
	system("pause");
	return 0;
}
