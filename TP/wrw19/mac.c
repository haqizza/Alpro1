#include "header.h"
/*Saya Muhammad Izzatul Haq mengerjakan Evaluasi TP 10 (WRW19) Warisan Raja While dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

int seleksi(int n,char arr[n]){
    int j,x=0,i=0,k=0,a=10;
    //Mecari kata kunci di teks
    char fors[]={'F','O','R','\0'};
    char comp[a];
    while((i<n)&&(x==0)){
        k=i;
        j=0;
        while(j<strlen(fors)){
            comp[j] = arr[k];
            j++;
            k++;
        }
        comp[j]='\0';
        if(strcmp(comp,fors)==0){
            x=1;
        }
        i++;
    }
    i=0;
    char dowhile[]={'D','O','W','H','I','L','E','\0'};
    while((i<n)&&(x==0)){
        k=i;
        j=0;
        while(j<strlen(dowhile)){
            comp[j] = arr[k];
            j++;
            k++;
        }
        comp[j]='\0';
        if(strcmp(comp,dowhile)==0){
            x=2;
        }
        i++;
    }
    return x;
}
void printer(int n,int x,char arr[n]){
    printf("Hasil dekripsi: %s\n",arr);
    if(x==1){
        printf("Pewaris sah: Pangeran For.\n");
    } else if(x==2){
        printf("Pewaris sah: Pangeran DoWhile.\n");
    } else {
        printf("Tidak ada pewaris yang sah.\n");
    }
}