#include<stdio.h>
#include<stdlib.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan evaluasi TP (PPKIDK19) Pola-Pola Kucing Imut Diatas Kasur dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int no=0;
    int i=0;
    int a,a1,b,b1,c,c1,d,d1,r,r1;
    char h0,h1,h2,h3,h4,h5;
    scanf("%d", &no);
    int no1=(no*2)-1;
    int no2=no*2;
    int no3=no*2;
    int no4=(no*2)-1;
    scanf(" %c %c %c %c %c %c",&h0,&h1,&h2,&h3,&h4,&h5);
    //top
    for(a=0;a<=no;a++){
        for(a1=0;a1<=a;a1++){
            printf("*");
        }
        for(a1=0;a1<no1;a1++){
            printf(" ");
        }
        if(a<no){
            for(a1=0;a1<=a;a1++){
                printf("*");
            }
        } else if(a=no){
            for(a1=0;a1<=(a-1);a1++){
                printf("*");
        }   }
        for(a1=0;a1<no3;a1++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        no1=no1-2;
        no3--;
    }
    //upper
    for(b=0;b<no;b++){
        for(b1=no;b1>b;b1--){
            printf(" ");
        }
        if(b>0){
            printf("*");
        }
        for(b1=0;b1<=(b-2);b1++){
            if(b>1){
                printf(" ");
        }   }
        if(b>0){
            for(b1=0;b1<=(b-1);b1++){
                printf(" ");
        }   }
        printf("*");
        for(b1=0;b1<no4;b1++){
            printf(" ");
        }
        printf("*");
        if(b>=(no/2)){
            for(b1=0;b1<=(b-(no/2));b1++){
                if(b>0){
                    printf(" ");
            }   }
            for(b1=0;b1<(no/2);b1++){
                printf("*");
        }   }
        printf("\n");
        no4=no4-2;
    }
    //below
    for(c1=0;c1<no;c1++){
        i++;}
    for(c1=0;c1<=(no/2);c1++){
        i++;}
    for(c1=0;c1<no;c1++){
        i++;}
    for(c1=0;c1<=(no/2);c1++){
        i++;}
    if(no%2==0){
        for(r=0;r<2;r++){
            for(r1=0;r1<i;r1++){
                printf("*");
            }
            printf("\n");
    }}else{
        for(r=0;r<2;r++){
            for(r1=0;r1<=i;r1++){
                printf("*");
            }
            printf("\n");
    }   }
    for(c=0;c<2;c++){
        for(c1=0;c1<no;c1++){
            printf(" ");
        }
        for(c1=0;c1<=(no/2);c1++){
            printf("*");
        }
        for(c1=0;c1<no;c1++){
            printf(" ");
        }
        for(c1=0;c1<=(no/2);c1++){
            printf("*");
        }
        printf("\n");
    }
    if(no%2==0){
        for(r=0;r<2;r++){
            for(r1=0;r1<i;r1++){
                printf("*");
            }
        printf("\n");
    }}else{
        for(r=0;r<2;r++){
        for(r1=0;r1<=i;r1++){
            printf("*");
        }
        printf("\n");
    }   }
    
    //bottom
    for(d=0;d<=6;d++){
        for(d1=0;d1<no2;d1++){
            printf(" ");
        }
        for(d1=0;d1<d;d1++){
                printf(" ");
        }
        switch(d){
            case 0:{
                printf("%c\n",h0);
                break;
            }
            case 1:{
                printf("%c\n",h1);
                break;
            }
            case 2:{
                printf("%c\n",h2);
                break;
            }
            case 3:{
                printf("%c\n",h3);
                break;
            }
            case 4:{
                printf("%c\n",h4);
                break;
            }
            case 5:{
                printf("%c\n",h5);
                break;
            }
        }
    }
    system("pause");
    return 0;
}
