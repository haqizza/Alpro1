#include<stdio.h>
typedef struct{int nim;char kelas;int tugas;int ulangan;int praktikum;int star;}mahasiswa;
int main(){/*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP (BUDSKI19) Hadiah Kenang-kenangan Budski dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    mahasiswa x,y,z;x.star=1;y.star=1;z.star=1;int n=0;int i=1;
    scanf("%d %c %d %d %d",&x.nim,&x.kelas,&x.tugas,&x.ulangan,&x.praktikum);
    scanf("%d %c %d %d %d",&y.nim,&y.kelas,&y.tugas,&y.ulangan,&y.praktikum);
    scanf("%d %c %d %d %d",&z.nim,&z.kelas,&z.tugas,&z.ulangan,&z.praktikum);
    switch(x.tugas){
        case 80 ... 100:{x.star++;break;}
        case 1 ... 49:{if(x.star!=0){x.star--;}break;}
    }
    switch(y.tugas){
        case 80 ... 100:{y.star++;break;}
        case 1 ... 49:{if(y.star!=0){y.star--;}break;}
    }
    switch(z.tugas){
        case 80 ... 100:{z.star++;break;}
        case 1 ... 49:{if(z.star!=0){z.star--;}break;}
    }
    switch(x.ulangan){
        case 80 ... 100:{x.star++;break;}
        case 1 ... 49:{if(x.star!=0){x.star--;}break;}
    }
    switch(y.ulangan){
        case 80 ... 100:{y.star++;break;}
        case 1 ... 49:{if(y.star!=0){y.star--;}break;}
    }
    switch(z.ulangan){
        case 80 ... 100:{z.star++;break;}
        case 1 ... 49:{if(z.star!=0){z.star--;}break;}
    }
    switch(x.praktikum){
        case 80 ... 100:{x.star++;break;}
        case 1 ... 49:{if(x.star!=0){x.star--;}break;}
    }
    switch(y.praktikum){
        case 80 ... 100:{y.star++;break;}
        case 1 ... 49:{if(y.star!=0){y.star--;}break;}
    }
    switch(z.praktikum){
        case 80 ... 100:{z.star++;break;}
        case 1 ... 49:{if(z.star!=0){z.star--;}break;}
    }
    printf(" JUMLAH BINTANG SETIAP MAHASISWA\n");
    printf("=================================\n");
    printf("Jumlah bintang %d: %d\n",x.nim,x.star);
    printf("Jumlah bintang %d: %d\n",y.nim,y.star);
    printf("Jumlah bintang %d: %d\n\n",z.nim,z.star);
    printf(" MAHASISWA BERPRESTASI\n");
    printf("=======================\n");
    if(x.star>2){
        switch(x.kelas){
            case 'A':{printf("%d. %d, mendapatkan Keyboard Wireless.\n",i,x.nim);i++;n++;break;}
            case 'B':{printf("%d. %d, mendapatkan Kacamata Anti Radiasi.\n",i,x.nim);i++;n++;break;}
            case 'C':{printf("%d. %d, mendapatkan Printer WiFi.\n",i,x.nim);i++;n++;break;}
            default :{printf("%d. %d, mendapatkan Cilok Kopma.\n",i,x.nim);i++;n++;break;}
    }   }
    if(y.star>2){
        switch(y.kelas){
            case 'A':{printf("%d. %d, mendapatkan Keyboard Wireless.\n",i,y.nim);i++;n++;break;}
            case 'B':{printf("%d. %d, mendapatkan Kacamata Anti Radiasi.\n",i,y.nim);i++;n++;break;}
            case 'C':{printf("%d. %d, mendapatkan Printer WiFi.\n",i,y.nim);i++;n++;break;}
            default :{printf("%d. %d, mendapatkan Cilok Kopma.\n",i,y.nim);i++;n++;break;}
    }   }
    if(z.star>2){
        switch(z.kelas){
            case 'A':{printf("%d. %d, mendapatkan Keyboard Wireless.\n",i,z.nim);i++;n++;break;}
            case 'B':{printf("%d. %d, mendapatkan Kacamata Anti Radiasi.\n",i,z.nim);i++;n++;break;}
            case 'C':{printf("%d. %d, mendapatkan Printer WiFi.\n",i,z.nim);i++;n++;break;}
            default :{printf("%d. %d, mendapatkan Cilok Kopma.\n",i,z.nim);i++;n++;break;}
    }   }
    if(n==0){printf("Tidak ada mahasiswa berprestasi.\n");}
    return 0;
}
