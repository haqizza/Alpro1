#include<stdio.h>
#include<stdlib.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi UTS (PPKIDK19) Pola-Pola Kucing Imut Diatas Kasur dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int x,i,a,b;
    int n=2;
    int l=1;
    int m=1;

    scanf("%d",&x);
    //Atas
    for(i=0;i<x;i++){
        for(b=(x-1);b>i;b--){
            printf(" ");
        }
        for(a=0;a<x;a++){
            printf("*");
        }
        for(a=0;a<n;a++){
            printf("*");
        }
        n=n+2;
        printf("\n");
    }
    //Middle
    for(i=0;i<x;i++){
        //Top
        for(a=0;a<x;a++){
            printf("*");
        }
        for(a=0;a<(x*2);a++){
            printf(" ");
        }
        for(a=0;a<x;a++){
            printf("*");
        }
        //Diamond
        for(b=(x-1);b>i;b--){
            printf(" ");
        }
        for(a=0;a<m;a++){
            printf("*");
        }
        m=m+2;
        printf("\n");
    }
    n=n-2;
    m=m-4;
    //Bawah
    for(i=0;i<x;i++){
        for(a=0;a<i;a++){
            printf(" ");
        }
        for(a=n;a>0;a--){
            printf("*");
        }
        for(b=0;b<x;b++){
            printf("*");
        }
        //Diamond Bottom
        for(a=0;a<x;a++){
            printf(" ");
        }
        for(a=0;a<l;a++){
            printf(" ");
        }
        //Mondai Ari
        for(a=m;a>0;a--){
            printf("*");
        }
        m=m-2;
        n=n-2;
        l=l+2;
        printf("\n");

    }
    printf("%d",m);

    system("pause");
    return 0;
}