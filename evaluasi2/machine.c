#include "head.h"
    /*Saya Muhammad Izzatul Haq mengerjakan Evaluasi2 (BNRW19C2) Batu Nisan Raja While dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
int check(int n,int m,char nama[][50],char nisan[][50]){
    int i,j,len1,len2,kekka,k=0,x=0,y=0,counter=0;
    char nisan1[50];
    char nama1[50];
    char cek[50];

    //Menjadikan nama 1 baris
    for(i=0;i<n;i++){
        len1 = strlen(nama[i]);

        for(j=0;j<len1;j++){
            nama1[k] = nama[i][j];
            k++;
        }
    }
    nama1[k] = '\0';
    len1 = strlen(nama1);
    k = 0;

    //Menjadikan nisan 1 baris
    for(i=0;i<m;i++){
        len2 = strlen(nisan[i]);

        for(j=0;j<len2;j++){
            nisan1[k] = nisan[i][j];
            k++;
        }
    }
    nisan1[k] = '\0';
    len2 = strlen(nisan1);
    k = 0;

    //Identifikasi Nisan
    for(i=0;i<len1;i++){//per jumlah char nama1
        for(j=0;j<len2;j++){//per jumlah char nisan1
            if(nisan1[j] == nama1[i]){
                cek[k] = nisan1[j];
                nisan1[j] = '1';//huruf yang sudah ditemukan, dihapus
                k++;
                break;//jika ditemukan, lanjut cek huruf berikutnya
            }
        }
    }
    cek[k] = '\0';
    k = 0;
    x = strcmp(cek,nama1);//menyamakan cek dan nama
    y = strcmp(nama1,"rajawhile");//menyamakan nama

    if((x==0)&&(y==0)){
        kekka = 1;//makan raja while
    } else if((x==0)&&(y!=0)){
        kekka = 2;//makam ...
    } else{
        kekka = 3;//not found
    }

    return kekka;
}

void print(int n,int x,char nama[][50]){
    int i=0,j=1;
    if(x==1){
        printf("Ini Makam Raja While!\n");
    }else if(x==2){
        printf("Anda Menemukan Makam ");
        for(i=0;i<n;i++){
            printf("%s",nama[i]);
            if(j!=n){
                printf(" ");
            }
            j++;
        }
        printf("!\n");
    }else{
        printf("Pemilik Makam Tidak Ditemukan.\n");
    }
}