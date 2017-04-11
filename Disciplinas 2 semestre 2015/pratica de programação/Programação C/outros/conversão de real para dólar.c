#include <stdio.h>
#include <stdlib.h>
int main (void) {
float r,cd,d;
printf ("valor em real\n");
scanf ("%f",&r);

printf ("cotaçao do dolar\n");
scanf ("%f",&cd);

d=r/cd;
printf ("valor convertido para dólar=%f\n",d);
getch ();
return 0;
}
