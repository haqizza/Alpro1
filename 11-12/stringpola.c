#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b,c;
    int i=0;
    scanf("%d",&a);
    char x[a];

    scanf("%s",&x);

    for(b=0;b<(strlen(x)-(strlen(x)/2));b++){
        for(c=0;c<i;c++){
            printf(" ");
        }
        printf("%c\n",x[b]);
        i++;
    }
    i--;
    for(b;b<strlen(x);b++){
            i--;

        for(c=0;c<i;c++){
            printf(" ");
        }
        printf("%c\n",x[b]);
        
    }

    system("pause");
    return 0;
}
