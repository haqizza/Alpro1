#include<stdio.h>
#include<stdlib.h>
int main(){
	/*Saya Muhammad Izzatul Haq mengerjakan Kuis (chchse19) Char Char Seimbang dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
	
	char a,b,c,d,e,f;
	int v=0;
	int k=0;
	scanf("%c %c %c %c %c %c",&a,&b,&c,&d,&e,&f);
	
	
	if(a=='a'){
		v++;
	}else if(a=='i'){
		v++;
	}else if(a=='u'){
		v++;
	}else if(a=='e'){
		v++;
	}else if(a=='o'){
		v++;
	}else{k++;} 
	if(b=='a'){
		v++;
	}else if(b=='i'){
		v++;
	}else if(b=='u'){
		v++;
	}else if(b=='e'){
		v++;
	}else if(b=='o'){
		v++;
	}else{k++;} 
	if(c=='a'){
		v++;
	}else if(c=='i'){
		v++;
	}else if(c=='u'){
		v++;
	}else if(c=='e'){
		v++;
	}else if(c=='o'){
		v++;
	}else{k++;} 
	if(d=='a'){
		v++;
	}else if(d=='i'){
		v++;
	}else if(d=='u'){
		v++;
	}else if(d=='e'){
		v++;
	}else if(d=='o'){
		v++;
	}else{k++;} 
	if(e=='a'){
		v++;
	}else if(e=='i'){
		v++;
	}else if(e=='u'){
		v++;
	}else if(e=='e'){
		v++;
	}else if(e=='o'){
		v++;
	}else{k++;} 
	if(f=='a'){
		v++;
	}else if(f=='i'){
		v++;
	}else if(f=='u'){
		v++;
	}else if(f=='e'){
		v++;
	}else if(f=='o'){
		v++;
	}else{k++;} 
	
	if(v==k){
		printf("seimbang\n");
	}else{
		printf("tidak seimbang\n");
	}
	
	system("pause");
	return 0;}
