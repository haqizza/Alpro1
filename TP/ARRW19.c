#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP7 (ARRW19) Agen Rahasia Raja While dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    char input[30];
    char key[30];
    char comp[30];
    char comp2[30];
    char plain[30];
    char plain2[30];
    char cip1[30];
    char cip2[30];
    char a='a';
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    int n=0;

    //Input
    while(input[i-1]!='-'){
        scanf(" %c",&input[i]);
        i++;
    }
    i--;
    input[i]='\0';
    scanf("%s",key);
    i=0;

    //Key Catching + Plain Text Buliding
    while(i<strlen(input)){
        j=0;
        while(j!=strlen(key)){
            comp[j]=input[l];
            j++;
            l++;
        }
        comp[j]='\0';
        if(strcmp(comp,key)==0){
            i=i+strlen(key);
        }
        plain2[k]=input[i];
        k++;
        i++;
        l=i;
    }
    plain2[k]='\0';
    i=0;
    l=0;
    k=0;
    j=0;
    //Key Catching + Plain Text Buliding Second
    while(i<strlen(plain2)){
        j=0;
        while(j!=strlen(key)){
            comp[j]=plain2[l];
            j++;
            l++;
        }
        comp[j]='\0';
        if(strcmp(comp,key)==0){
            i=i+strlen(key);
        }
        plain[k]=plain2[i];
        k++;
        i++;
        l=i;
    }
    plain[k]='\0';
    i=0;
    j=0;
    //Encrypt
    if((strlen(plain)!=0)&&(strcmp(plain,key)!=0)){
        //Bunsanshi ikkai-me
        while(i<(strlen(plain)/2)){
            comp[i]=plain[i];
            i++;
        }
        comp[i]='\0';
        i=(strlen(plain)-1);
        while(i>((strlen(plain)-1)/2)){
            comp2[j]=plain[i];
            i--;
            j++;
        }
        i=(strlen(plain)/2);
        i=0;
        j=0;
        //First Encrypting
        while(i<strlen(plain)){
            cip1[i]=comp2[j];
            i++;
            cip1[i]=comp[j];
            i++;
            j++;
        }
        cip1[i]='\0';
        i = strlen(cip1);
        if((i%2)==1){
            cip1[i-1]='\0';
        }
        i=0;
        j=0;
        //Bunsanshi nikai-me
        while(i<(strlen(cip1)/2)){
            comp[i]=cip1[i];
            i++;
        }
        comp[i]='\0';
        i=(strlen(cip1)-1);
        while(i>((strlen(cip1)-1)/2)){
            comp2[j]=cip1[i];
            i--;
            j++;
        }
        i=(strlen(cip1)/2);
        i=0;
        j=0;
        //Second Encrypting
        while(i<strlen(cip1)){
            cip2[i]=comp2[j];
            i++;
            cip2[i]=comp[j];
            i++;
            j++;
        }
        cip2[i]='\0';

        printf("Kata Kunci    : %s\n",plain);
        printf("Hasil Enkrip1 : %s\n",cip1);
        printf("Hasil Enkrip2 : %s\n",cip2);
    }else{
        printf("DATA TELAH TERCURI !\n");
    }

    

    system("pause");
	return 0;
}