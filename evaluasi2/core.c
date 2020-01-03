#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Evaluasi2 (BNRW19C2) Batu Nisan Raja While dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,m,x,i;

    scanf("%d",&n);
    char nama[n][50];
    for(i=0;i<n;i++){
        scanf("%s",nama[i]);
    }

    scanf("%d",&m);
    char nisan[m][50];
    for(i=0;i<m;i++){
        scanf("%s",nisan[i]);
    }

    x = check(n,m,nama,nisan);
    
    print(n,x,nama);

    system("pause");
    return 0;
}