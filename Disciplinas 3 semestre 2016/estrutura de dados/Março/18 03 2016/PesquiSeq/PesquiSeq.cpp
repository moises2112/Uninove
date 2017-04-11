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

int PesqSeq(int vet[], int busca, int t)
{
   int i;
   for (i=0; i<t; i++)
   {   
       if (vet[i]==busca)
          return i;
       else
          if (vet[i]>busca)
             return -1;
   } 
   return -1;
}


main()
{
   int vet[10];
   int n;
   
   printf("\nEntre com 10 numeros inteiros\n");
   for(int i=0; i<10;i++)
   {
     printf("v[%d]=",i);   
     scanf("%d",&vet[i]);
   }
   bsort(vet,10);
   
   printf("\nQual valor deseja buscar no vetor: \n");  
   scanf("%d",&n); 
   
   printf("\nDepois da ordenacao\n");
   for(int i=0; i<10;i++)
     printf("v[%d]=%d\n",i,vet[i]);
   
   printf("\nvalor %d esta na posicao %d\n",n, PesqSeq(vet,n,10));
   
   system("pause");   
}
