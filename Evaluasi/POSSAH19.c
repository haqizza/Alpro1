#include<stdio.h>
#include<stdlib.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Evaluasi1 (POSSAH19) Pola Original Suka-Suka Agak Hese dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int x,x1,x2,i,i1,i2,i3;
    int h=0;
    int k=0;
    int v=0;
    int n=0;
    int d=1;
    
    //Scanning
    scanf("%d",&x1);
    char a[x1];
    for(i=0;i<x1;i++){
        scanf(" %c",&a[i]);
    }
    scanf("%d",&x2);
    char b[x2];
    for(i=0;i<x2;i++){
        scanf(" %c",&b[i]);
    }
    x=(x1+x2);
    int xs=x;
    int x3=x1;
    int x4=x2;
    int e=x1+1;
    char c[x];
    //Bunretsu
    for(i=0;i<x1;i++){
        if((a[i]=='a')||(a[i]=='i')||(a[i]=='u')||(a[i]=='e')||(a[i]=='o')){
            c[v]=a[i];
            v++;
        }else{
            k++;
        }
    }
    for(i=0;i<x2;i++){
        if((b[i]=='a')||(b[i]=='i')||(b[i]=='u')||(b[i]=='e')||(b[i]=='o')){
            c[v]=b[i];
            v++;   
        }else{
            k++;
        }
    }
    //Konsonan
    for(i=0;i<x1;i++){
        if((a[i]!='a')&&(a[i]!='i')&&(a[i]!='u')&&(a[i]!='e')&&(a[i]!='o')){
            c[v]=a[i];
            v++;
        }
    }
    for(i=0;i<x2;i++){
        if((b[i]!='a')&&(b[i]!='i')&&(b[i]!='u')&&(b[i]!='e')&&(b[i]!='o')){
            c[v]=b[i];
            v++;   
        }
    }
    //Printing
    n=x-1;
    //Top
    printf("*");
    for(i=0;i<x;i++){
        printf("%c",c[i]);
    }
    printf("*\n");
    //Dia Top
    for(i=0;i<x2;i++){
        printf("%c",c[n]);

        for(i1=0;i1<x3;i1++){
            printf("%c",c[i1]);
        }
        for(i2=0;i2<d;i2++){
            printf(" ");
        }
        for(i1=e;i1<xs;i1++){
            printf("%c",c[i1]);
        }
        printf("%c",c[h]);
        n--;
        h++;
        d=d+2;
        x3--;
        e++;
        printf("\n");
    }
    d=d-4;
    x3=x3+2;
    e=e-2;
    x4=x4-2;
    //Dia Bottom
    for(i=0;i<x1;i++){
        printf("%c",c[n]);

        for(i1=0;i1<x3;i1++){
            printf("%c",c[i1]);
        }
        for(i2=d;i2>0;i2--){
            printf(" ");
        }
        for(i1=e;i1<x;i1++){
            printf("%c",c[i1]);
        }
        printf("%c",c[h]);

        n--;
        h++;
        d=d-2;
        x3++;
        e--;
        printf("\n");
    }


    //Bottom
    printf("*");
    for(i=(x-1);i>=0;i--){
        printf("%c",c[i]);
    }
    printf("*\n");

    system("pause");
    return 0;
}
