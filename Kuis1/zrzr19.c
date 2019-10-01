#include<stdio.h>
#include<stdlib.h>
int main(){
	/*Saya Muhammad Izzatul Haq mengerjakan Kuis (zrzr19) Zero Zero di Angkasa dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
	
	int a,x;
	int n=0;
	scanf("%d",&x);
	
	if(x>999){
		x=x+111;
	} else if(x>99){
		x=x+11;
	} else if(x>9){
		x=x+1;
	}
	
	a=x/1000;
	if(a==0){
		printf("ribuan\n");
		n++;
	}
	x=x-(a*1000);
	a=x/100;
	a--;
	if(a==0){
		printf("ratusan\n");
		n++;
	}
	a++;
	x=x-(a*100);
	a=x/10;
	a--;
	if(a==0){
		printf("puluhan\n");
		n++;
	}
	a++;
	x=x-(a*10);
	a=x/1;
	a--;
	if(a==0){
		printf("satuan\n");
		n++;
	}
	if(n==0){
		printf("tidak mengandung 0\n");
	}	
	
	system("pause");
	return 0;}
