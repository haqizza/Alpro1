#include "header.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Kuis 3 dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,m,out,a,i,len;

    scanf("%d",&n);
    char str[n][50];
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }

    scanf("%d",&out);

    // Cari string terpanjang
    m = max(n,str);

    // Cek ada/tidak
    if(m>=out){
        for(i=0;i<n;i++){
            len = strlen(str[i]);

            if(i>0){
                printf(" ");
            }
            // Cek + print character
            printf("%c",check(n,i,out,len,str));
        }
    }else{
        printf("tidak ada");
    }
    printf("\n");
    
    

    system("pause");
    return 0;
}