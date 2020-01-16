#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Remedial (rmp19) Huruf String Lagi Lah Ya dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i,n;

    scanf("%d",&n);
    char str[n][50];
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }

    print(n,str);


    system("pause");
    return 0;
}