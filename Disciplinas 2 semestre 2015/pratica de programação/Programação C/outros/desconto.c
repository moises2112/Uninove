#include <stdio.h>
#include <stdlib.h>
int main (void) {
float v,d,vd,vf;
printf ("valor da compra?");
scanf ("%f",&v);

printf ("porcentagem do desconto?");
scanf ("%f",&d);

vd=(v*d);
vf=(v-vd);
printf ("valor com desconto=%.2f\n",vf);
getch ();
return 0;
}
