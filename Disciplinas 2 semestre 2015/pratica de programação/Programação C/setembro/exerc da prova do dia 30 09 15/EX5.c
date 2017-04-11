//Moises da Silva
//Ericson Guerra
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
main(){
       char nome[15][150];
       int a,b,c;
       for (a=0;a<15;a++){
           printf ("Digite o nome %d:\n",a+1);
           gets (nome[a]);}
       for (a=0;a<15;a++){
           b=0;
           b=strlen(nome[a]);
           printf ("O nome %d possui %d caracteres\n",a+1,b);}
           system("pause");}
           
