#include"head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan UAS Nomor 1 dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,i;
    scanf("%d",&n);

    char arr[n][50];

    for(i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    
    printer(n,arr);

    system("pause");
    return 0;
}