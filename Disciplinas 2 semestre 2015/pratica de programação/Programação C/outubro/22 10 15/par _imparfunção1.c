#include <stdio.h>
#include <stdlib.h>
#include <E:\EXECUTAVEIS LIBERADOS\moises\par _imparfunção2.h>
int total;


int main(){
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    total=somar(A,B,C);
    printf ("A soma eh=%d\n",total);
    printf ("O valor eh ");
    par_impar(total);
    system ("pause");}
