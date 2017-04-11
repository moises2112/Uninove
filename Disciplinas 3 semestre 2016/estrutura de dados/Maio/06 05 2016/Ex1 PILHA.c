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
    for (i=0;i<=strlen(palavra);i++)
        push (&p,palavra[i]);
    printf ("\n\n Valor devolvido pela pilha=>");
    while (isEmpty(&p)==0)
          printf ("%c",pop(&p));
    printf("\n\n\n");
    system("pause");
    return 0;
}
