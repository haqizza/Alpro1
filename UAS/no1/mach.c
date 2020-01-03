#include"head.h"
/*Saya Muhammad Izzatul Haq mengerjakan UAS Nomor 1 dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void printer(int n,char arr[][50]){
    int i,j,k,a,len,y,x=0,space=0;
    for(i=0;i<n;i++){
        len = strlen(arr[i]);
        //Front Space
        for(a=0;a<space;a++){
            printf(" ");
        }
        
        if(space>0){//Jika sudah line 2, ini process
            y = len;
            //Front Print
            for(j=y-space;j<len;j++){
                printf("%c",arr[i][j]);
            }
            //Middle Space
            printf(" ");
        }
        //Back Print
        for(k=0;k<(len-space);k++){
            printf("%c",arr[i][k]);
        }
        printf("\n");
        space++;
        x++;
    }
}