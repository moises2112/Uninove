#include <stdio.h>
#include <stdlib.h>
int main (void) {
float s,pr,sr;
printf ("salario\n");
scanf ("%f",&s);

printf ("porcentual de reajuste\n");
scanf ("%f",&pr);

sr=(s*pr)+s;
printf ("salario reajustado=%.2f\n",sr);
getch ();
return 0;
}
