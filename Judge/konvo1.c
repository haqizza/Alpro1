#include<stdio.h>
#include<stdlib.h>
int main(){/*Saya Muhammad Izzatul Haq mengerjakan evaluasi (konvo1) Kombinasi Konsonan Vokal dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
char a,b,c,d,e,f;int x=0;int i=0;

do{
scanf("%c\n",&a);scanf("%c\n",&b);

if((a=='a')||(a=='i')||(a=='u')||(a=='e')||(a=='o')){
    if((b!='a')&&(b!='i')&&(b!='u')&&(b!='e')&&(b!='o')){
        x++;
    }
} else if((a!='a')&&(a!='i')&&(a!='u')&&(a!='e')&&(a!='o')){
        if((b=='a')||(b=='i')||(b=='u')||(b=='e')||(b=='o')){
            x++;
        }
    }
    i++;
}while(i<2);

if(x==3){
    printf("kombinasi valid\n");
}else{
    printf("kombinasi tidak valid\n");
}
system("pause");return 0;}
