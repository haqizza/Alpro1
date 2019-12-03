#include"proc.h"
int main(){
    int n;
    scanf("%d",&n);

    pola(n);
    pola(n+1);
    pola(n+2);

    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }

    intArrayW(n,arr);

    system("pause");
    return 0;
}