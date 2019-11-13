#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int a,b;
    int i=0;
    int j=0;
    int k=0;
    char x[20];

    scanf("%s",&x);

    for(b=0;b<strlen(x);b++){
        if((x[b]=='a')||(x[b]=='i')||(x[b]=='u')||(x[b]=='e')||(x[b]=='o')){
            i++;
        }
        if((x[b]!='a')&&(x[b]!='i')&&(x[b]!='u')&&(x[b]!='e')&&(x[b]!='o')){
            j++;
        }
        if((x[b]=='1')||(x[b]=='2')||(x[b]=='3')||(x[b]=='4')||(x[b]=='5')||(x[b]=='6')||(x[b]=='7')||(x[b]=='8')||(x[b]=='9')||(x[b]=='0')){
            k++;
        }
    }  
    printf("jumlah vokal = %d\n",i);
    printf("jumlah konsonan = %d\n",j);
    printf("jumlah angka = %d\n",k);

    system("pause");
    return 0;
}
