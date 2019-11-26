#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Kuis 2 (strrk19) Pasukan String Rata Kanan dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int i,j,k,n,x,y,ps;
    int space=0;

    //Scan Array
    scanf("%d",&n);
    char a[n][50];
    //Input
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    //Space Election
    for(i=0;i<n;i++){
        x = strlen(a[i]);
        y = strlen(a[i-1]);
        if(x>space){
            space = x;
        }
    }
    // Printing
    for(i=0;i<n;i++){
        ps = space - strlen(a[i]);
        for(j=0;j<ps;j++){
            printf(" ");
        }
        printf("%s\n",a[i]);
    }

    system("pause");
    return 0;
}