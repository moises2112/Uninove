#include <stdlib.h>
#include <stdio.h>
#include "filas.h"

int main()
{
  int i;
  tpFila f;
  int n;
  int op;
  
  qinit(&f); // Inicia a Fila
  enqueue(&f,n); // Insere um elemento na fila
  
  //Remove todos os elementos da fila 
  while(qisEmpty(&f)==0)
    printf("\n%d",dequeue(&f));
        
  system("pause");
}
