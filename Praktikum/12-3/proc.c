#include<stdio.h>
#include<stdlib.h>
int min,max=0;

void getMin(int banyak,int angka[]){
    min = angka[0];
    int i;
    for(i=0;i<banyak;i++){
        if(min>angka[i]){
            min=angka[i];
        }
    }
}
void getMax(int angka){
    int tampung = angka;
    if(tampung>max){
        max = tampung;
    }
}
void cetakJumlah(){
    printf("min : %d max : %d\n",min,max);
    printf("hasil pertambahan min dan max : %d\n",min+max);
}

int main(){
    int i,n;
    scanf("%d",&n);
    int deret[n];

    for(i=0;i<n;i++){
        scanf("%d",&deret[i]);
    }

    getMin(n,deret);
    for(i=0;i<n;i++){
        getMax(deret[i]);
    }
    cetakJumlah();

    system("pause");
    return 0;
}