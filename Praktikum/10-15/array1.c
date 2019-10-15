#include<stdio.h>
#include<stdlib.h>
int main(){
    int y[3];
    int x[4]={1,2,3,43};
    
    x[0]=1;
    x[1]=16;
    x[2]=9;

    printf("array x : %d %d %d\n", x[0],x[1],x[2]);
    printf("array y : %d %d %d %d\n", y[0],y[1],y[2],y[3]);

    system("pause");
	return 0;
}