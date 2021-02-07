#include "header.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,i,tebal,y,z;
    float x;
    char str1[15];
    int str[15];

    scanf("%d",&n);
    
    long int num[n];
    for(i=0;i<n;i++){
        scanf("%li",&num[i]);
    }
    scanf("%d",&tebal);//Tebal
    
    x = count(n,num);
    sprintf(str1,"%.2f",x);//Convert float ke String
    for(i=0;i<strlen(str1);i++){
        y = str1[i];
        str[i] = y-48;
    }
    z = strlen(str1);

    perhitungan(n,num);//Print perhitungan

    print(tebal,z,str);//Print pola

    
    system("pause");
    return 0;
}