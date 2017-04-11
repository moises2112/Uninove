#include <stdio.h>
int main() {
    char NOME[70];
    double FIXO,VENDAS,FC;
    gets (NOME);
    scanf ("%lf",&FIXO);
    scanf ("%lf",&VENDAS);
    FC=FIXO+(VENDAS*0.15);
    printf ("TOTAL = R$ %.2lf\n",FC);
    system ("pause");}
