#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP8 (SATTS19) Salah Apa TTS dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int x,y,z,douzen,dougo;
    char a1,a2,a3,a4;
    int n=0;
    int i=0;
    int j=0;
    int k=0;
    int space=0;
    char a[50][50];
    //Scan First & Second Array
    while(strcmp(a[i-1],"ngak")!=0){
        scanf("%s",a[i]);
        i++;
        n++;
    }
    n--;
    char b[n][50];
    for(i=0;i<n;i++){
        scanf("%s",b[i]);
    }
    //Election for Array Three
    char c[n][50];
    for(i=0;i<n;i++){
        x = strlen(a[i]);
        y = strlen(b[i]);
        if(x >= y){
            strcpy(c[i],a[i]);
        }else{
            strcpy(c[i],b[i]);
        }
    }
    //Printing
    for(i=0;i<n;i++){
        x = strlen(c[i]);
        y = strlen(c[i-1]);
        z = strlen(c[i+1]);
        //Douzen, Dougo
        a1 = c[i][x-1];
        a2 = c[i+1][0];
        a3 = c[i][0];
        a4 = c[i-1][y-1];
        if(a1==a2){
            dougo = 1;
        }else{dougo = 0;}
        if(a3==a4){
            douzen = 1;
        }else{douzen = 0;}

        if((i+1)%2!=0){
            for(k=0;k<space;k++){
                printf(" ");
            }
            printf("%s",c[i]);
            space = space + strlen(c[i]);
        }else{
            if(douzen==1){
                printf("\n");
                space = space - 1;
                for(j=1;j<(x-1);j++){
                    for(k=0;k<space;k++){
                        printf(" ");
                    }
                    printf("%c\n",c[i][j]);
                }
                if(dougo!=1){
                    for(k=0;k<space;k++){
                        printf(" ");
                    }
                    printf("%c\n",c[i][j]);
                }
                
            }else{
                printf("%c\n",c[i][0]);
                for(j=1;j<(x-1);j++){
                    for(k=0;k<space;k++){
                        printf(" ");
                    }
                    printf("%c\n",c[i][j]);
                }
                if(dougo!=1){
                    for(k=0;k<space;k++){
                        printf(" ");
                    }
                    printf("%c\n",c[i][j]);
                }
            }
        }
        
    }

    system("pause");
    return 0;
}