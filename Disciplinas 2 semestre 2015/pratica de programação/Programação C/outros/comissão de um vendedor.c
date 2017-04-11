#include <stdio.h>
#include <stdlib.h>
int main (void) {
float qv,vv,vt,pc,vc;
printf ("quantidade de vendas\n");
scanf ("%f",&qv);

printf ("valor pago por venda (unidade)\n");
scanf ("%f",&vv);

vt=(qv*vv);
printf ("valor total ganho=%.2f\n",vt);
printf ("porcentagem da comissão do vendedor\n");
scanf ("%f",&pc);
vc=(vt/100)*pc;
printf ("valor da comissão do vendedor=%.2f\n",vc);
getch ();
return 0;
}
