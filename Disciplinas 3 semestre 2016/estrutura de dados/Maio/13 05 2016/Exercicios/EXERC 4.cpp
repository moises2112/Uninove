#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "filas.h"

int main()
{
  int i;
  tpFila a;
  int n;
  int b;
  
  qinit(&a);
  
  while(b!=3)
  {    
    system("cls");
    printf("\n1=Inserir na fila\n2=Mostrar fila\n3=Sair\n\n");
    scanf("%d",&b);
        
    if(b==1)
    {
      printf("Digite um numero qualquer: ");
      scanf("%d",&n);
      enqueue(&a,n);
    }  
    else if(b==2)
    { 
      printf("\nValor desolvido pela fila:");
      while(qisEmpty(&a)==0)
        printf("\n%d",dequeue(&a));
        
      printf("\n");
      system("pause>>null");
    }  
  }
}
