#include"head2.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan UAS Nomor 2 dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

    int n,a,i;
    char h;
    scanf("%d",&n);

    char arr[n][50];

    for(i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    scanf(" %c",&h);

    a = cariHuruf(n,h,arr);

    printf("%d\n",a);

    system("pause");
    return 0;
}