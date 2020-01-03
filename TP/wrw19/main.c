#include "header.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Evaluasi TP 10 (WRW19) Warisan Raja While dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,a,b,c,i=0;

    scanf("%d",&n);

    int brankas[n];
    char kekka[n];
    int enkrip[n];
    //Scan Kode Brankas
    while(i<n){
        scanf("%d",&brankas[i]);
        i++;
    }
    i=0;//Reinitialize i
    //Scan Kode Enkripsi
    while(i<n){
        scanf(" %c",&enkrip[i]);
        i++;
    }
    i=0;
    //Pemecahan Kode & convert ke arr of string
    while(i<n){
        kekka[i] = enkrip[i] - brankas[i];
        i++;
    }
    kekka[i] = '\0';
    i=0;
    //Menentukan pewaris tahta
    int winner = seleksi(n,kekka);
    //Print
    printer(n,winner,kekka);

    system("pause");
    return 0;
}