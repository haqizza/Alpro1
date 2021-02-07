#include "header.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Kuis 3 (spl19) Seperempat Lagi dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,a,i;

    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int part[2];
    for(i=0;i<2;i++){
        scanf("%d",&part[i]);
    }

    count(n,arr,part);
    

    system("pause");
    return 0;
}