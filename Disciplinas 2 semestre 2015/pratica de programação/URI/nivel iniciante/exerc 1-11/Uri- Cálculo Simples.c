#include <stdio.h>
int main() {
    int A,B,C,D;
    float UNI1,UNI2,TOTAL;
    scanf ("%d%d%f",&A,&B,&UNI1);
    scanf ("%d%d%f",&C,&D,&UNI2);
    TOTAL=B*UNI1+D*UNI2;
    printf ("VALOR A PAGAR: R$ %.2f\n",TOTAL);
    system ("pause");}
