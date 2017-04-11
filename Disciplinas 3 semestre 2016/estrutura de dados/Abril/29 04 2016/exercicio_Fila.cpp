#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "filas.h"

tpFila f;

void mostraFila()
{
   printf("**********************************************************\n");
   printf("* F I L A   D E   E S P E R A   -   S E N H A (S)        *\n");
   printf("**********************************************************\n\n");            
   
   printqueue(&f);
     
   printf("\n\n**********************************************************\n");
   printf("* F I L A   D E   E S P E R A   -   S E N H A (S)        *\n");
   printf("**********************************************************\n\n");               
}

int main()
{
  int i;
  int op;
  int senha=1000; 
  
  qinit(&f);
  
  while (op!=3)
  {
    system("cls"); 
    mostraFila();
    printf("**********************************************************\n");
    printf("* OPCAO                                                  *\n");
    printf("**********************************************************\n\n");              
    printf("\n1-Nova Senha\n2-Atendimento\n3-Sair\n\n");
    scanf("%d",&op);
  
    if(op==1) 
    {
      senha++;
      enqueue(&f,senha);          
    }  
    else if(op==2)
      dequeue(&f);   
  }  
  return 0;
}
