#include"head.h"

int konsonan(int n,char arr[][n]){
    int i,j,k=0;
    for(i=0;i<n;i++){
        int len = strlen(*arr);
        for(j=0;j<len;j++){
            if((arr[i][j]=='b')||(arr[i][j]=='c')||(arr[i][j]=='d')||(arr[i][j]=='f')||(arr[i][j]=='g')||(arr[i][j]=='h')||(arr[i][j]=='j')||(arr[i][j]=='k')||(arr[i][j]=='l')||(arr[i][j]=='m')||(arr[i][j]=='n')||(arr[i][j]=='p')||(arr[i][j]=='q')||(arr[i][j]=='r')||(arr[i][j]=='s')||(arr[i][j]=='t')||(arr[i][j]=='v')||(arr[i][j]=='w')||(arr[i][j]=='x')||(arr[i][j]=='y')||(arr[i][j]=='z')){
                k++;
            }
        }
    }
    return k;
}
int vokal(int n,char arr[][n]){
    int i,j,v=0;
    for(i=0;i<n;i++){
        int len = strlen(*arr);
        for(j=0;j<len;j++){
            if((arr[i][j]=='a')||(arr[i][j]=='i')||(arr[i][j]=='u')||(arr[i][j]=='e')||(arr[i][j]=='0')){
                v++;
            }
        }
    }
    return v;

}
int elementCheck(int n,char arr[][n]){
    int element,el;
    if(strcmp(arr[0],'api')==1){
            el=1;
        }else if(strcmp(arr[0],'air')==1){
            el=2;
        }else if(strcmp(arr[0],'tanah')==1){
            el=3;
        }else if(strcmp(arr[0],'udara')==1){
            el=4;
        }else if(strcmp(arr[0],'listrik')==1){
            el=5;
        }
    return element;
}
void berhasil(){
        printf("========== BERHASIL ==========");
}
void gagal(){
        printf("=========== GAGAL ===========");
}