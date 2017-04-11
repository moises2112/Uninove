#include <stdlib.h>
#include <stdio.h>
#include "filas.h"

int main()
{
  int i;
  tpFila f;
  int n;
  int op;
  
  qinit(&f);
  
  while(op!=3)
  {    
    system("cls");
    printf("\n1-Inserir na fila\n2-Mostrar fila\n3-Sair\n\n");
    scanf("%d",&op);
        
    if(op==1)
    {
      printf("Digite um numero qualquer: ");
      scanf("%d",&n);
      enqueue(&f,n);
    }  
    else if(op==2)
    { 
      printf("\n\nValor desolvido pela fila =>");
      while(qisEmpty(&f)==0)
        printf("\n%d",dequeue(&f));
        
      printf("\n\n\n");
      system("pause");
    }  
  }
  return 0;
}
