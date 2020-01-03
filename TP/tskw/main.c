#include"head.h"
int main(){
    //Init.
    int i,j,n,k1,k2,v1,v2;
    char penyakit[1][50];
    char elPen[1][50]; 
    int elPen2;
    //Scan Peyakin
    scanf("%s",penyakit[0]);
    scanf("%s",elPen[0]);
    //Scan Jumlah
    scanf("%d",&n);
    char obat[n][50];
    char elO[n][50];
    int elO2[n];
    int kekka[n];
    int elxel[n];
    //Scan Obat
    for(i=0;i<n;i++){
        scanf("%s",obat[i]);
        scanf("%s",elO[i]);
    }
    //Konsonan & Vokal Penyakit
    k1 = konsonan(1,penyakit);
    v1 = vokal(1,penyakit);
    //Konsonan & Vokal Obat + Hasil Nama
    for(i=0;i<n;i++){
        k2 = konsonan(n,obat[i]);
        v2 = vokal(1,obat[i]);
        if(v2>v1){
            kekka[i] = 1;
        }else if(k2>k1){
            kekka[i] = 1;
        }else{
            kekka[i] = 0;
        }
    }
    //Elemen + Hasil
        elementCheck(1,elPen);
    for(i=0;i<n;i++){
        
    }

    berhasil();
    gagal();

    system("pause");
    return 0;
}