#include"proc.h"
int main(){
    //????????
    // int n;
    // scanf("%d",&n);

    // pola(n);
    // pola(n+1);
    // pola(n+2);

    // int arr[n];
    // int i;
    // for(i=0;i<n;i++){
    //     scanf("%d\n",&arr[i]);
    // }

    // intArrayW(n,arr);

    //=============================================================
    // //Menghitung jumlah A dalam String
    // int hasil;
    // char str[50];
    // scanf("%s",&str);
    // hasil = jumlahA(str);
    // printf("%d\n",hasil);

    // scanf("%s",&str);
    // printf("%d\n",jumlahA(str));
    
    //=============================================================
    //Return dengan hasil tambah
    // int x,y;

    // scanf("%d %d",&x,&y);
    // printf("%d\n",tambah(x,y));

    //=============================================================
    //Jumlahkan isi elemen array
    // int n,i,x;
    // scanf("%d",&n);
    // int arr[n];
    // for(i=0;i<n;i++){
    //     scanf("%d", &arr[i]);
    // }
    // x = jumlahArr(n,arr);
    // printf("Sum of Array : %d\n",x);

    //=============================================================
    //Print = max * min
    int i,x,y,all,n;

    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    x = min(n,arr);
    y = max(n,arr);
    all = x*y;
    prints(all);

    system("pause");
    return 0;
}