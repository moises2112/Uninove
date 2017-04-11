#include <stdio.h>
#include <stdlib.h>
int dividir_v(int x){//por valor
    return x/2;}
int dividir_r(int*z){//por referencia
    return*z=*z/2;}
main(){
       int a=10,b,*p;
       printf("valor inicial a=%d\n",a);
       b=dividir_v(a);
       printf ("a=%d,b=%d\n",a,b);
       p=&a;
       b=dividir_r(p);
       printf("\na=%d,b=%d,*p=%d,p=%d\n",a,b,*p,p);
       system ("pause>>null");}
