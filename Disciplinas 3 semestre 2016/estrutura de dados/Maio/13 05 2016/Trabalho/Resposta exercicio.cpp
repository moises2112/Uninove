#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilhas.h"

main()
{
    int i;
    tpPilha p;
    char palavra[30];
    
    printf("Digite uma frase: ");
    gets(palavra);
    init(&p);

    printf("\n\nValor devolvido pela pilha => ");
    for (i=0;i<=strlen(palavra);i++)
    {            
      if (palavra[i]==' ' || i==strlen(palavra))
      {
        while (isEmpty(&p)==0)      
          printf("%c",pop(&p));
                                         
        printf(" ");;        
      }  
      else
        push(&p,palavra[i]);      
    }       

    printf("\n\n\n");
    system("pause");      
}
