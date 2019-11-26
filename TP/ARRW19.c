#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP7 (ARRW19) Agen Rahasia Raja While dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    char input[30];
    char key[30];
    char comp[30];
    char plain[30];
    char cip1[30];
    char chip2[30];
    char a='a';
    int i=0;
    int j=0;
    int n=0;

    //Input
    while(a!='-'){
        scanf(" %c",&a);
        input[i] = a;
        i++;
    }
    i--;
    input[i]= '\0';
    scanf("%s",key);
    printf("%s\n%s\n",input,key);
    i=0;

    //Key catch
    while(i!=strlen(input)){
        j=0;
        while(j!=strlen(key)){
            comp[j]=input[j]
        }
        strcmp(comp,key);
        i++;
    }
    printf("%s\n%s\n%s",input,key,plain);

    
    system("pause");
	return 0;
}