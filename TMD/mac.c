#include "header.h"
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

float count(int n,long int num[]){
    int i,x=0;
    float go;
    //SUM array
    for(i=0;i<n;i++){
        x = x + num[i];
    }

    //Membagi jumlah dengan panjang array
    go = (float)x / (float)n;
    return go;
}
//Print Perhitungan
void perhitungan(int n,long int num[]){
    int i;
    for(i=0;i<n;i++){
        if(i>0){
            printf(" + ");
        }
        printf("%li",num[i]);
    }
    printf("\n");
}
void ooo(int n){
    int i;
    for(i=0;i<n;i++){
            printf("-");
        }
    for(i=0;i<n;i++){
            printf("-");
        }
    for(i=0;i<n;i++){
            printf("-");
        }
}
void oxo(int n){
    int i;
    for(i=0;i<n;i++){
            printf("-");
        }
    for(i=0;i<n;i++){
            printf("@");
        }
    for(i=0;i<n;i++){
            printf("-");
        }
}
void xoo(int n){
    int i;
    for(i=0;i<n;i++){
            printf("@");
        }
    for(i=0;i<n;i++){
            printf("-");
        }
    for(i=0;i<n;i++){
            printf("-");
        }
}
void oox(int n){
    int i;
    for(i=0;i<n;i++){
            printf("-");
        }
    for(i=0;i<n;i++){
            printf("-");
        }
    for(i=0;i<n;i++){
            printf("@");
        }
}
void xox(int n){
    int i;
    for(i=0;i<n;i++){
            printf("@");
        }
    for(i=0;i<n;i++){
            printf("-");
        }
    for(i=0;i<n;i++){
            printf("@");
        }
}
void xxo(int n){
    int i;
    for(i=0;i<n;i++){
            printf("@");
        }
    for(i=0;i<n;i++){
            printf("@");
        }
    for(i=0;i<n;i++){
            printf("-");
        }
}
void oxx(int n){
    int i;
    for(i=0;i<n;i++){
            printf("-");
        }
    for(i=0;i<n;i++){
            printf("@");
        }
    for(i=0;i<n;i++){
            printf("@");
        }
}
void xo(int n){
    int i;
    for(i=0;i<n;i++){
            printf("@");
        }
    for(i=0;i<n;i++){
            printf("-");
        }
}
void ox(int n){
    int i;
    for(i=0;i<n;i++){
            printf("-");
        }
    for(i=0;i<n;i++){
            printf("@");
        }
}
void xx(int n){
    int i;
    for(i=0;i<n;i++){
            printf("@");
        }
    for(i=0;i<n;i++){
            printf("@");
        }
}
void x(int n){
    int i;
    for(i=0;i<n;i++){
            printf("@");
        }
}
void o(int n){
    int i;
    for(i=0;i<n;i++){
            printf("+");
        }
}
void print(int m,int len,int str[]){
    int h,i,j,l,y,z,a;

    //Print pola
    for(j=0;j<5;j++){
        //Print perbaris sesuai ketebalan
        for(i=0;i<m;i++){
            for(l=0;l<len;l++){
                a = str[l];

                if(l==0){
                    //Print angka pertama
                    switch(j){
                        /*Case untuk menentukan baris ke berapa yang di print.
                        Pola di print perbaris sesuai kriteria.*/
                        case 0:{
                            z=0;
                            for(h=l;h<len;h++){
                                if((str[h]==0)&&(str[h]==2)&&(str[h]==3)&&(str[h]==5)&&(str[h]==6)&&(str[h]==7)&&(str[h]==8)&&(str[h]==9)){
                                    z=1;
                                }
                            }
                            if((a==0)||(a==2)||(a==5)||(a==6)||(a==8)||(a==9)){
                                if(z!=1){
                                    oxo(m);
                                }else{
                                    ox(m);
                                }
                            }
                            if(a==3){
                                if(z!=1){
                                    xo(m);
                                }else{
                                    x(m);
                                }
                            }
                            if(a==1){
                                if(z!=1){
                                    o(m);
                                }
                            }
                            if(a==7){
                                if(z!=1){
                                    xxo(m);
                                }else{
                                    xx(m);
                                }
                            }
                            if(a==4){
                                if(z!=1){
                                    ooo(m);
                                }
                            }
                            break;
                        }
                        case 1:{
                            if((a==0)||(a==8)||(a==9)||(a==4)){
                                xox(m);
                            }
                            if((a==2)||(a==7)){
                                oox(m);
                            }
                            if(a==3){
                                ox(m);
                            }
                            if(a==1){
                                x(m);
                            }
                            if((a==5)||(a==6)){
                                xoo(m);
                            }
                            break;
                        }
                        case 2:{
                            z=0;
                            for(h=l;h<len;h++){
                                if((str[h]==2)&&(str[h]==3)&&(str[h]==4)&&(str[h]==5)&&(str[h]==6)&&(str[h]==8)&&(str[h]==9)){
                                    z=1;
                                }
                            }
                            if((a==2)||(a==4)||(a==5)||(a==6)||(a==8)||(a==9)){
                                if(z!=1){
                                    ox(m);
                                    y = 1;
                                }else{
                                    oxo(m);
                                }
                                if(((str[l+1]==2)||(str[l+1]==3)||(str[l+1]==4)||(str[l+1]==5)||(str[l+1]==6)&&(str[l+1]==8)&&(str[l+1]==9))&&(y==1)){
                                    o(m);
                                }
                            }
                            if((a==0)||(a==7)){
                                if(z==1){
                                    ooo(m);
                                }
                            }
                            if(a==3){
                                if(z!=1){
                                    xo(m);
                                } else{
                                    x(m);
                                }
                                
                            }
                            if(a==1){
                                if(z!=1){
                                    o(m);
                                }else{
                                    o(m);
                                }
                            }
                            break;
                        }
                        case 3:{
                            if((a==0)||(a==6)||(a==8)){
                                xox(m);
                            }
                            if((a==4)||(a==5)||(a==7)||(a==9)){
                                oox(m);
                            }
                            if(a==2){
                                xoo(m);
                            }
                            if(a==3){
                                ox(m);
                            }
                            if(a==1){
                                x(m);
                            }
                            break;
                        }
                        case 4:{
                            if((a==0)||(a==2)||(a==5)||(a==6)||(a==8)||(a==9)){
                                oxo(m);
                            }
                            if((a==4)){
                                oox(m);
                            }
                            if((a==7)){
                                ooo(m);
                            }
                            if(a==3){
                                xo(m);
                            }
                            if(a==1){
                                o(m);
                            }
                            break;
                        }
                    }
                }else if(l==(len-1)){ 
                    //Print angka terakhir
                    switch(j){
                        case 0:{
                            if((a==0)||(a==2)||(a==5)||(a==6)||(a==8)||(a==9)){
                                o(m);
                                ox(m);
                            }
                            if(a==7){
                                o(m);
                                xx(m);
                            }
                            if(a==3){
                                o(m);
                                x(m);
                            }
                            break;
                        }
                        case 1:{
                            if((a==0)||(a==8)||(a==9)||(a==4)){
                                o(m);
                                xox(m);
                            }
                            if((a==2)||(a==7)){
                                o(m);
                                oox(m);
                            }
                            if(a==3){
                                o(m);
                                ox(m);
                            }
                            if((a==1)||(a==5)||(a==6)){
                                o(m);
                                x(m);
                            }
                            break;
                        }
                        case 2:{
                            if((a==2)||(a==5)||(a==6)||(a==8)||(a==9)){
                                o(m);
                                ox(m);
                            }
                            if(a==4){
                                o(m);
                                oox(m);
                            }
                            if(a==3){
                                o(m);
                                x(m);
                            }
                            break;
                        }
                        case 3:{
                            if((a==0)||(a==6)||(a==8)){
                                o(m);
                                xox(m);
                            }
                            if((a==4)||(a==5)||(a==7)||(a==9)){
                                o(m);
                                oox(m);
                            }
                            if(a==3){
                                o(m);
                                ox(m);
                            }
                            if((a==1)||(a==2)){
                                o(m);
                                x(m);
                            }
                            break;
                        }
                        case 4:{
                            if((a==0)||(a==2)||(a==5)||(a==6)||(a==8)||(a==9)){
                                o(m);
                                ox(m);
                            }
                            if((a==4)){
                                o(m);
                                oox(m);
                            }
                            if((a==3)){
                                o(m);
                                x(m);
                            }
                            break;
                        }
                    }
                }else{
                    //Print angka tengah
                    switch(j){
                        case 0:{
                            z=0;
                            for(h=l+1;h<len;h++){
                                if((str[h]==0)&&(str[h]==2)&&(str[h]==3)&&(str[h]==5)&&(str[h]==6)&&(str[h]==7)&&(str[h]==8)&&(str[h]==9)){
                                    z=1;
                                }
                            }
                            if((a==0)||(a==2)||(a==5)||(a==6)||(a==8)||(a==9)){
                                if(z!=1){
                                    o(m);
                                    oxo(m);
                                }else{
                                    o(m);
                                    ox(m);
                                }
                            }
                            if(a==3){
                                if(z!=1){
                                    o(m);
                                    xo(m);
                                }else{
                                    o(m);
                                    x(m);
                                }
                            }
                            if(a==4){
                                if(z!=1){
                                    o(m);
                                    ooo(m);
                                }
                            }
                            if(a==7){
                                if(z!=1){
                                    o(m);
                                    xxo(m);
                                }else{
                                    o(m);
                                    xx(m);
                                }
                            }
                            if(a==-2){
                                if(z!=1){
                                    o(m);
                                    o(m);
                                }
                            }
                            if(a==1){
                                if(z!=1){
                                    o(m);
                                    o(m);
                                }
                            }
                            break;
                        }
                        case 1:{
                            if((a==0)||(a==8)||(a==9)||(a==4)){
                                o(m);
                                xox(m);
                            }
                            if((a==2)||(a==7)){
                                o(m);
                                oox(m);
                            }
                            if((a==5)||(a==6)){
                                o(m);
                                xoo(m);
                            }
                            if(a==3){
                                o(m);
                                ox(m);
                            }
                            if(a==1){
                                o(m);
                                x(m);
                            }
                            if(a==-2){
                                o(m);
                                o(m);
                            }
                            break;
                        }
                        case 2:{
                            z=0;
                            for(h=l;h<len;h++){
                                if((str[h]==2)&&(str[h]==3)&&(str[h]==4)&&(str[h]==5)&&(str[h]==6)&&(str[h]==8)&&(str[h]==9)){
                                    z=1;
                                }
                            }
                            if((a==2)||(a==4)||(a==5)||(a==6)||(a==8)||(a==9)){
                                if(z!=1){
                                    // printf("1");
                                    o(m);
                                    ox(m);
                                    y=1;
                                }else{
                                    // printf("2");
                                    o(m);
                                    oxo(m);
                                }
                                if(((str[l+1]==2)||(str[l+1]==3)||(str[l+1]==4)||(str[l+1]==5)||(str[l+1]==6)||(str[l+1]==8)||(str[l+1]==9))&&(y==1)){
                                    o(m);
                                }
                            }
                            if(a==3){
                                if(z!=1){
                                    // printf("3");
                                    o(m);
                                    xo(m);
                                }else{
                                    // printf("4");
                                    o(m);
                                    x(m);
                                }
                            }
                            if((a==0)||(a==7)){
                                if(z!=1){
                                    // printf("5");
                                }else{
                                    // printf("6");
                                    o(m);
                                    ooo(m);
                                }
                            }
                            if(a==-2){
                                if(z!=1){
                                    // printf("7");
                                }else{
                                    // printf("8");
                                    o(m);
                                    o(m);
                                }
                            }
                            if(a==1){
                                if(z!=1){
                                    // printf("9");
                                }else{

                                    // printf("10");
                                    o(m);
                                    o(m);
                                }
                            }
                            break;
                        }
                        case 3:{
                            if((a==0)||(a==6)||(a==8)){
                                o(m);
                                xox(m);
                            }
                            if((a==4)||(a==5)||(a==7)||(a==9)){
                                o(m);
                                oox(m);
                            }
                            if(a==3){
                                o(m);
                                ox(m);
                            }
                            if(a==2){
                                o(m);
                                xoo(m);
                            }
                            if(a==1){
                                o(m);
                                x(m);
                            }
                            if(a==-2){
                                o(m);
                                o(m);
                            }
                            break;
                        }
                        case 4:{
                            if((a==4)){
                                o(m);
                                oox(m);
                            }
                            z=0;
                            for(h=l;h<len;h++){
                                if((str[h]==0)&&(str[h]==2)&&(str[h]==3)&&(str[h]==4)&&(str[h]==5)&&(str[h]==6)&&(str[h]==8)&&(str[h]==9)){
                                    z=1;
                                }
                            }
                            if((a==0)||(a==2)||(a==5)||(a==6)||(a==8)||(a==9)){
                                if(z!=1){
                                    o(m);
                                    oxo(m);
                                }else{
                                    o(m);
                                    ox(m);
                                }
                            }
                            if(a==3){
                                if(z!=1){
                                    o(m);
                                    xo(m);
                                }else{
                                    o(m);
                                    x(m);
                                }
                            }
                            if((a==7)){
                                if(z!=1){
                                    o(m);
                                    ooo(m);
                                }
                            }
                            if(a==1){
                                if(z!=1){
                                    o(m);
                                    o(m);
                                }
                            }
                            if(a==-2){
                                    o(m);
                                    x(m);
                            }
                            break;
                        }
                    }
                }            
            }
            
            printf("\n");
        }
    }
    
}