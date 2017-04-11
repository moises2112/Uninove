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

void isort(int vet[], int t)
{
   int i,j,k;
   
   for (i=1; i<t; i++)
   {     
     k=vet[i];
     j=i-1;
     while (j>=0 && vet[j] >k)
     {
        vet[j+1]=vet[j];
        j--;
     }      
     vet[j+1]=k;
   } 
}

void recebe(int vet[])
{
  for (int i=0; i<MAX; i++)
  {     
    printf("Entre com o valor da posicao v[%d]: ", i); 
    scanf("%d", &vet[i]);
  }  
}

void mostra(int vet[])
{
  for (int i=0; i<MAX; i++)     
    printf("Valor da posicao v[%d]: %d\n",i,vet[i]);  
}

main()
{
  int v1[MAX];
  int v2[MAX];
  int v3[MAX];  
  
  printf("\nDados do vetor V1\n");
  recebe(v1); 
  printf("\nDados do vetor V2\n");
  recebe(v2);  
  printf("\nDados do vetor V3\n");
  recebe(v3);   
 
  printf("\nDados do vetor V1 - Ordenado usando Bubble Sort\n");  
  bsort(v1,MAX);
  mostra(v1);  
  printf("\nDados do vetor V2 - Ordenado usando Selection Sort\n");  
  ssort(v2,MAX);
  mostra(v2);   
  printf("\nDados do vetor V3 - Ordenado usando Insertion Sort\n");  
  isort(v3,MAX);
  mostra(v3);    
    
  system("pause");
}
