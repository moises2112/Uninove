#include <stdlib.h>
#include <stdio.h>

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

void ssort(int vet[], int t)
{
   int i,j,min,k=0;
   
   for (i=0; i<(t-1); i++)
   {     
     min=i;
     for(j=(i+1);j<t;j++)
     {
        if (vet[j] < vet[min])
           min=j;
     }    
     if (i!=min)
     {
        k=vet[i];
        vet[i]=vet[min];
        vet[min]=k;
     }
   } 
}

int PesqBin(int vet[], int busca, int t)
{
   int inicio, fim, meio;
   
   inicio = 0;
   fim = t-1;
   
   while (inicio <= fim)
   {
      meio = (inicio+fim)/2;
      if (vet[meio]==busca)
         return meio;
      if (busca < vet[meio])
         fim = meio-1;
      else
         inicio = meio+1;   
   }
   return -1;
}

main()
{
   
   system("pause");   
}
