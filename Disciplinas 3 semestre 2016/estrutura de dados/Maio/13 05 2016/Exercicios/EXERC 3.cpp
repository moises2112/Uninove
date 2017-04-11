#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilhas.h"

int main (){
    int i,a=0;
    tpPilha p;
    char palavra[30],PALAVRA[30];
    printf ("Digite uma palavra qualquer:\n");
    gets (palavra);
    strcpy(PALAVRA,palavra);
    init (&p);
    for (i=0;i<strlen(palavra);i++)
        push (&p,palavra[i]);
    i=0;
    while (isEmpty(&p)==0){
          if (palavra[i]==pop(&p))
             a+=1;
          i+=1;
    }            
    if (a==i)
       printf ("Palindromo\n");
    else
       printf ("Nao e um palindromo\n");
system("pause>>null");
}
    
