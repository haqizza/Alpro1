#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
        char kode;
        char nama[20];
        int jumlah;
}barang;

int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP6 (REDRAW19) REview Dengan Raja While dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n;
    int i=0;
    int j=0;
    int k=0;
    char a;
    char b='1';

    scanf("%d",&n);
    barang data[n];

    if(n!=0){
        while(i<n){
            scanf(" %c",&data[i].kode);
            j=0;
            a='a';
            while(a!='.'){
                scanf(" %c",&a);
                if(a!='.'){
                    data[i].nama[j] = a;
                }
                j++;
            }
            j--;
            data[i].nama[j] = '\0';
            scanf("%d",&data[i].jumlah);
            i++;
        }
        while(b!='!'){
            scanf(" %c",&b);
            i=0;
            while(i<n){
                if(data[i].kode == b){
                    data[i].jumlah--;
                }
                i++;
            }
        }
    }
    i=0;
    // for(i=0;i<n;i++){
    //     printf("%c\n",data[i].kode);
    //     printf("%s\n",data[i].nama);
    //     printf("%d\n",strlen(data[i].nama));
    //     printf("%d\n",data[i].jumlah);
    // }
    while(i<n){
        if(data[i].jumlah>0){
            k++;
        }
        i++;
    }
    i=0;
    if(n==0){
        printf("================\nTidak Ada Review\n================\n");
    }else{
        printf("=============\nReview Barang\n=============\n");
        if(k>0){
            while(i<n){
                if(data[i].jumlah>0){
                    printf("+Kode   : %c\n",data[i].kode);
                    printf(">Nama   : %s\n",data[i].nama);
                    printf(">Jumlah : %d\n",data[i].jumlah);
                    printf("=============\n");
                    
                }
                i++;
            }
        }else{
           printf("*Barang Habis\n"); 
           printf("=============\n");
        }
    }

    system("pause");
	return 0;
}