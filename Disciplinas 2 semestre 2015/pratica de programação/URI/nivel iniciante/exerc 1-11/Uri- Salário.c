#include <stdio.h>
int main() {
    int NUMBER,HORAS;
    float SALPHORA,SALARIO;
    scanf ("%d",&NUMBER);
    scanf ("%d",&HORAS);
    scanf ("%f",&SALPHORA);
    SALARIO=HORAS*SALPHORA;
    printf ("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,SALARIO);
    system ("pause");}
