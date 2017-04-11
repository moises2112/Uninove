#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  max 15
main (){
     int a,b=0,c;
     for (a=max;a>=0;a-=2){
         for (c=1;c<=(80-a)/2;c++)
             printf (" ");
         for (b=0;b<a;b++)
             printf ("*");
         printf ("\n");
         }
         system ("pause");}
