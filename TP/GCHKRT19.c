#include<stdio.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP (GCHKRT19) Gacha Kartu Langka dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i,n=5,x=0,k=0,v=0;
    char ar1[n];
    int ar2[n];
    for(i=0;i<n;i++){
        scanf(" %c",&ar1[i]);
    }
    for(i=0;i<n;i++){
        switch(ar1[i]){
            case '0' ... '9' :{
                ar2[i] = ar1[i]-48;
                break;
            }
            default :{
                ar2[i] = (int)ar1[i];
                //vokal OR konsonan
                if((ar1[i]=='A')||(ar1[i]=='I')||(ar1[i]=='U')||(ar1[i]=='E')||(ar1[i]=='O')){
                    v++;
                }else{
                    k++;
                }
                break;
            }
        }
        //jumlahkan
        x += ar2[i];
    }
    if(v>k){
        if(x%2==0){
            printf("Selamat anda mendapatkan kartu Light Magician.\n");
        }else{
            printf("Selamat anda mendapatkan kartu Blue Eyes Black Dragon.\n");
        }
    } else if(k>v){
        if(x%2==0){
            printf("Selamat anda mendapatkan kartu Wall Force.\n");
        }else{
            printf("Selamat anda mendapatkan kartu Meteor Dust.\n");
        }
    } else{
        printf("Selamat anda mendapatkan kartu Keribo.\n");
    }
	return 0;
}