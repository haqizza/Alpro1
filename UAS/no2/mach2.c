#include"head2.h"
/*Saya Muhammad Izzatul Haq mengerjakan UAS Nomor 2 dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
int cariHuruf(int n,char h,char arr[][50]){
    int i,j,max,go=0,x=0;
    int arr1[n];
    //Hitung yang sama, nilai dimasukkan ke Array
    for(i=0;i<n;i++){//Read Array row
        x = 0;
        for(j=0;j<strlen(arr[i]);j++){//Read Array collumn
            if(arr[i][j]==h){
                x++;//Jika char sama dengan yang dicari, dihitung sebagai x
            }
        }
        arr1[i] = x;//jumlah value(x) yang telah dicari di setiap row dimasukkan ke array
    }
    //Array berisi value dibandingkan, which's bigger
    max = arr1[0];
    for(i=0;i<n;i++){
        if(max<arr1[i]){
            max = arr1[i];
        }
    }
    go = max;

    return go;
}