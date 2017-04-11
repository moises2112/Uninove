#include <stdio.h>
#include <stdlib.h>
int multiplicar_v(int x){//por valor
    return x*2;}
int multiplicar_r(int*z){//por referencia
    return*z=*z*2;}
main(){
       int a=10,b,*p;
       printf("valor inicial a=%d\n",a);
       b=multiplicar_v(a);
       printf ("a=%d,b=%d\n",a,b);
       p=&a;
       b=multiplicar_r(p);
       printf("\na=%d,b=%d,*p=%d,p=%d\n",a,b,*p,p);
       system ("pause>>null");}
