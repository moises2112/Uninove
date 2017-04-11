#include <stdio.h>
#include <stdlib.h>
int somar_V(int x){//por valor
    return x+1;}
int somar_R(int*z){//por referencia
    return*z=*z+1;}
main(){
       int a=2,b,*p;
       printf("valor inicial a=%d\n",a);
       b=somar_V(a);
       printf ("a=%d,b=%d\n",a,b);
       p=&a;
       b=somar_R(p);
       printf("\na=%d,b=%d,*p=%d,p=%d\n",a,b,*p,p);
       system ("pause>>null");}

