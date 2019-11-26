#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Kuis 2 (strtk19) String Tukar Tukar dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i,x,y;
    char a[50];
    char b[50];
    //Scan First & Second Array
    scanf("%s",a);
    scanf("%s",b);
    //Kaihen
    x = strlen(a);
    y = strlen(b);
    if(x<=y){
        char c[x];
        for(i=1;i<x;i+=2){
            c[i] = a[i];
            a[i] = b[i];
            b[i] = c[i];
        }
    }else{
        char c[y];
        for(i=1;i<y;i+=2){
            c[i] = a[i];
            a[i] = b[i];
            b[i] = c[i];
        }
    }
    printf("%s\n%s\n",a,b);

    system("pause");
    return 0;
}