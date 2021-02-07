#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan Remedial (arint19) Array Integer Lagi Lah Ya dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
int kel3(int m,int a){
    int x=0;

    if((a % m)==0){
        x = 1;
    }

    return x;
}
int cek(int n,int m,int arr[]){
    int x,a,i,count=0,kekka=0;
    for(i=0;i<n;i++){
        a = arr[i];
        x = kel3(m,a);
        
        if(x==1){
            count++;
        }
    }
    if(count>=3){
        kekka = 1;
    }
    return kekka;
}
