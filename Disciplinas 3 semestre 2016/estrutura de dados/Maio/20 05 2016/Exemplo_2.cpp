#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 5

void bsort(char vet[][20], int t)
{
  int i,j;
  char k[20];    
  
  for (i=0;i<t-1;i++)
  {
    for (j=0;j<t-(i+1);j++)
    {
        if (strcmp(vet[j],vet[j+1])>0)
        {
          strcpy(k,vet[j]);
          strcpy(vet[j],vet[j+1]);
          strcpy(vet[j+1],k);
        }
    }     
  }
}

void ssort(char vet[][20], int t)
{
   int i,j,min;
   char k[20]; 
   
   for (i=0; i<(t-1); i++)
   {     
     min=i;
     for(j=(i+1);j<t;j++)
     {
        if (strcmp(vet[j],vet[min])<0)
           min=j;
     }    
     if (i!=min)
     {
        strcpy(k,vet[i]);
        strcpy(vet[i],vet[min]);
        strcpy(vet[min],k);        
     }
   } 
}

void isort(char vet[][20], int t)
{
   int i,j;
   char k[20]; 
   
   for (i=1; i<t; i++)
   {     
     strcpy(k,vet[i]);
     j=i-1;
     while (j>=0 && strcmp(vet[j],k)>0)
     {
        strcpy(vet[j+1],vet[j]);
        j--;
     } 
     strcpy(vet[j+1],k);     
   } 
}

void recebe(char vet[][20])
{
  for (int i=0; i<MAX; i++)
  {     
    printf("Entre com o nome da posicao v[%d]: ", i); 
    gets(vet[i]);
  }  
}

void mostra(char vet[][20])
{
  for (int i=0; i<MAX; i++)     
    printf("Nome da posicao v[%d]: %s\n",i,vet[i]);  
}

main()
{
  char v1[MAX][20];
  char v2[MAX][20];
  char v3[MAX][20];  
  
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
