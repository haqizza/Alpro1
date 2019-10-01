#include<stdio.h>
#include<stdlib.h>
typedef struct{
        int x;
        int y;
    }titik;
int main(){
	titik p1;
    
    printf("Masukkan nilai koordinat x:\n");
    scanf("%d", &p1.x);
    printf("Masukkan nilai koordinat y:\n");
    scanf("%d", &p1.y);

    printf("Titik yang anda masukkan:\n");
    printf("x: %d\n",p1.x);
    printf("y: %d\n",p1.y);
	
	system("pause");
	return 0;
}
