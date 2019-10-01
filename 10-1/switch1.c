#include<stdio.h>
#include<stdlib.h>
int main(){

	int x;
    scanf("%d",&x);

    switch(x){
        case 1 : {
            printf("Senin");
            break;
        }
        case 2 : {
            printf("Selasa");
            break;
        }
        case 3 : {
            printf("Rabu");
            break;
        }
        case 4 : {
            printf("Kamis");
            break;
        }
        case 5 : {
            printf("Jum'at");
            break;
        }
        case 6 : {
            printf("Sabtu");
            break;
        }
        case 7 : {
            printf("Ahad");
            break;
        }
        default : {
            printf("Tidak ada hari ke &d",x);
            break;
        }
    }
	
	system("pause");
	return 0;}
