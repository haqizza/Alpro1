#include"proc.h"

void pola(int n){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}
void intArrayW(int n,int arr[n]){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int jumlahA(char str[]){
    int i,j=0;
    for(i=0;i<strlen(str);i++){
        if((str[i]=='a')||(str[i]=='A')){
            j++;
        }
    }
    return j;
}
int tambah(int a,int b){
    return (a+b);
}
int jumlahArr(int n,int arr[]){
    int i,jumlah = 0;
    for(i=0;i<n;i++){
        jumlah = jumlah + arr[i];
    }

    return jumlah;
}
int min(int n,int arr[n]){
    int i;
    int min=arr[0];
    for(i=0;i<n;i++){
        if(min > arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int max(int n,int arr[n]){
    int i;
    int max=arr[0];
    for(i=0;i<n;i++){
        if(max < arr[i]){
            max=arr[i];
        }
    }
    return max;
}
void prints(int x){
    int i;
    for(i=0;i<x;i++){
        printf("Terima Kasih untuk Tetap Semangat\n");
    }
}