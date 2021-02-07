#include "head.h"
int main(){
    /*Saya Muhammad Izzatul Haq mengerjakan Remedial (arint19) Array Integer Lagi Lah Ya dalam mata kuliah Algoritma Pemgrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    int n,m,a,x,y,i,count=0;
    int bil[3];

    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);

    a = cek(n,m,arr);
    
    if(a==1){
        for(i=0;i<n;i++){
            y = arr[i];
            x = kel3(m,y);
            
            if(x == 1){
                if(i>0){
                    printf(" ");
                }
                printf("%d",arr[i]);
                count++;
            }
            if(count>=3){
                break;
            }
        }
    }else{
        printf("tidak memenuhi syarat");
    }
    printf("\n");

    system("pause");
    return 0;
}