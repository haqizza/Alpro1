#include "header.h"
/*Saya Muhammad Izzatul Haq mengerjakan Kuis 3 (spl19) Seperempat Lagi dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void count(int n, int arr[],int part[]){
    int i,j,k,div,x,x1,kekka=0;
    
    div = n/4;
    int arr1[2][div];
    
    // Memasukkan bagian perempat 
    for(i=0;i<2;i++){
        x = div*part[i];
        x1 = x - div;
        k=0;

        for(j=x1;j<x;j++){
            arr1[i][k] = arr[j];
           
            k++;
        }
    }
    
    // Membandingkan
    for(i=0;i<div;i++){
        if(arr1[0][i]==arr1[1][i]){
            kekka = 1;
        }else{
            break;
        }
    }
    if(kekka==1){
        printf("sama\n");
    }else{
        printf("tidak sama\n");
    }

}