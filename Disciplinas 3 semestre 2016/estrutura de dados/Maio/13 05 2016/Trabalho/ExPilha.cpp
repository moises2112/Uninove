#include <stdio.h>
#include <stdlib.h>
#include "pilhas.h"

int main()
{
    int n,r;
    tpPilha p;
    
    printf("Digite um inteiro positivo: ");
    scanf("%d",&n);
    init(&p);
    do
    {
      r=n%2;
      push(&p,r);
      n=n/2;
    }while (n!=0);
    printf("\n\nCorrespondente ao binario => ");
    while (isEmpty(&p)==0)
    {
      r=pop(&p);
      printf("%d",r);
    }
    printf("\n\n\n");
    system("pause");
    return 0;       
}
