#include <stdio.h>

int main(){
    int A,B,D;
    int C[7]={100,50,20,10,5,2,1};
    scanf ("%d",&A);
    for (B=0;B<7;B++){
        D=A/C[B];
        if (A>=C[B]){
                A=A%C[B];}
        printf ("%d nota(s) de R$ %d,00\n",D,C[B]);}
        system("pause");}
