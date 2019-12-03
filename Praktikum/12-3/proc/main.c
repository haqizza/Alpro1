#include "head.h"
int main(){ 
    int n,i;
    total=0;
    scanf("%d",&n);
    int deret[n];

    for(i=0;i<n;i++){
        scanf("%d", &deret[i]);
    }
    for(i=0;i<n;i++){
        penjumlahan(deret[i]);
    }

    printf("Jumlah Semua Angka : %d\n",total);

    system("pause");
    return 0;
}