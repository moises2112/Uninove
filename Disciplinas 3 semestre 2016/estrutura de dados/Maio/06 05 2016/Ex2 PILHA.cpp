#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilhas.h"

int main (){
    int i;
    tpPilha p;
    char palavra[30];
    printf ("Digite uma palavra qualquer:");
    gets (palavra);
    init (&p);
    printf ("\n\n Valor devolvido pela pilha=>");
    for (i=0;i<=strlen(palavra);i++){
        if (palavra[i]==' ' || i==strlen(palavra)){
           while (isEmpty(&p)==0)
                 printf ("%c",pop(&p));
           printf (" ");
           init (&p);
        }
        push (&p,palavra[i]);
    }   
    printf("\n\n\n");
    system("pause");
    return 0;
}
