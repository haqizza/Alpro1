#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,p,q,r,s;
    int a=0;
    scanf("%d",&n);
    int x[n];
    int y[n];

    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&y[i]);
    }

    for(i=0;i<n;i++){
        p=x[i]%2;
        q=y[i]%2;
        r=x[i]%2;
        s=y[i]%2;
        if((p==q)||(r==s)){
           a++;
        }
        printf("%d %d %d %d\n",p,q,r,s);
        printf("%d\n",a);
    }
    if(a==n){
        printf("Valid\n");
    } else {
        printf("Tidak valid\n");
    }

    system("pause");
	return 0;
}
