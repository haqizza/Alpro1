#include<stdio.h>
#include<stdlib.h>
int main(){

	int x,a,b;
    printf("Masukkan 2 Angka\n");
    scanf("%d %d",&a,&b);
    
    printf("Pilihlah menu berikut\n1. Tambah\n2. Kurang\n3. Kali\n");
    scanf("%d",&x);

    switch(x){
        case 1 : {
            printf("Hasil Tambah: %d\n", (a+b));
            break;
        }
        case 2 : {
            printf("Hasil Kurang: %d\n", (a-b));
            break;
        }
        case 3 : {
            printf("Hasil Kali: %d\n", (a*b));
            break;
        }
        default : {
            printf("Menu tidak valid\n");
            break;
        }
    }
	
	system("pause");
	return 0;}
