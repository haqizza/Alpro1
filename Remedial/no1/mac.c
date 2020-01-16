#include "head.h"
/*Saya Muhammad Izzatul Haq mengerjakan Remedial (rmp19) Huruf String Lagi Lah Ya dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
void print(int n,char str[][50]){
    int i,j,len,space=0;
    
    for(i=0;i<n;i++){
        len = strlen(str[i]);

        for(j=0;j<space;j++){
            printf(" ");
        }

        if(space<len){
            printf("%c\n",str[i][space]);
        }else{
            printf("_\n");
        }
        
        space++;
    }
}
