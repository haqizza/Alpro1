#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b;
    int i=0;
    scanf("%d",&a);
    char x[a];

    scanf("%s",&x);

    for(b=0;b<strlen(x);b++){
        if((x[b]=='k')&&(x[b+1]=='a')){
            i++;
        }
    }  
    printf("%d\n",i);

    system("pause");
    return 0;
}
