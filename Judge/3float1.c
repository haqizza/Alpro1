#include<stdio.h>
#include<stdlib.h>
int main(){/*Saya Muhammad Izzatul Haq mengerjakan evaluasi (3float1) 3 Float Kelipatan 3 dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/float n;int b,c,d;int x=0;int i=0;
do{scanf("%f",&n);
b=n;printf("%d\n",b);//23
c=n*100;printf("%d\n",c);//2333
d=c-(b*100);printf("%d\n",d);//33
d=(d/10);printf("%d\n",d);//3
if((d%3)==0){x++;}
i++;
}while(i<6);

if(x>=3){printf("valid\n");}else{printf("tidak valid\n");}
system("pause");return 0;}
