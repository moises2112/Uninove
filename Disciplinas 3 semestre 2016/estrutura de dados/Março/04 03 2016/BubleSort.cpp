#include <stdlib.h>
#include <stdio.h>
#define MAX 10

void bsort(int vet[], int t)
{
  int i,j,k=0;    
  
  for (i=0;i<t-1;i++)
  {
    for (j=0;j<t-(i+1);j++)
    {
        if (vet[j] > vet[j+1])
        {
          k=vet[j];
          vet[j]=vet[j+1];
          vet[j+1]=k;
        }
    }     
  }
}

void mostraordenado(int vet[])
{
   for (int i=0;i<MAX;i++)
     printf("%d\n",vet[i]);     
}

void mostramaiormenor(int vet[])
{
   printf("Menor %d\n",vet[0]); 
   printf("Maior %d\n",vet[MAX-1]);        
}

main()
{
  int v[MAX]={23,45,67,89,34,87,12,32,54,76};

  bsort(v,MAX); 
  mostraordenado(v);
  mostramaiormenor(v);
    
  system("pause");
}
