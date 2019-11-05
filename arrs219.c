#include<stdio.h>
#include<stdlib.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi UTS Pola-Pola Kucing Imut Diatas Kasur dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i,a;
    int h1=0;
    int h2=0;
    

    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++){
        scanf("%d",&x[i]);
    }
    //Calculate
    for(i=0;i<(a/2);i++){
        h1=h1+x[i];
    }
    for(i=(a/2);i<a;i++){
        h2=h2+x[i];
    }
    //Kekka
    if(h1==h2){
        printf("sesuai spesifikasi\n");
    }else{
        printf("tidak sesuai spesifikasi\n");
    }

    system("pause");
    return 0;
}