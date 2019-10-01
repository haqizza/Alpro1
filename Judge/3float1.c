#include<stdio.h>
#include<stdlib.h>
int main(){
	/*Saya Muhammad Izzatul Haq mengerjakan evaluasi (3float1) 3 Float Kelipatan 3 dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
	float a;
	int b,c,d;
	int x=0;
	for(int i=0;i<6;i++){
		scanf("%f",&a);
		
		b=a;
		printf("%d\n",b);
		c=a*10;
		printf("%d\n",c);
		d=c-(b*100);
		printf("%d\n",d);
		if((d%3)==0){
			x++;}
	}
	
	if(x>=3){
		printf("valid\n");
	} else {
		printf("tidak valid\n");
	}
	
	system("pause");
	return 0;}
