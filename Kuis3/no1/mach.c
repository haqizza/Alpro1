#include "header.h"
/*Saya Muhammad Izzatul Haq mengerjakan Kuis 3 dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
int max(int n,char str[][50]){
    int i,m;
    
    m = strlen(str[0]);

    for(i=0;i<n;i++){
        if(m<strlen(str[i])){
            m = strlen(str[i]);
        }
    }

    return m;
}
char check(int n,int i,int out,int len,char str[][50]){
    char x;

    if(len>=out){
        x = str[i][out-1]; // Jika ada
    }else{
        x = '_'; //Jika tidak ada
    }
    return x;
}