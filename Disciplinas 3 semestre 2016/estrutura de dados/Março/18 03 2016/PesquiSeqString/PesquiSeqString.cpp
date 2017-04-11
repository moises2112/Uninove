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

int PesqSeq(char vet[][20], char busca[], int t)
{
   int i;
   for (i=0; i<t; i++)
   {   
       if (strcmp(vet[i],busca)==0)
          return i;
       else
          if (strcmp(vet[i],busca)>0)
             return -1;
   } 
   return -1;
}


main()
{
   char vet[MAX][20];
   char n[20];
   
   printf("\nEntre com %d nomes\n",MAX);
   for(int i=0; i<MAX;i++)
   {
     printf("v[%d]=",i);   
     gets(vet[i]);
   }
   bsort(vet,MAX);
   
   printf("\nQual nome deseja buscar no vetor: \n");  
   gets(n); 
   
   printf("\nDepois da ordenacao\n");
   for(int i=0; i<MAX;i++)
     printf("v[%d]=%s\n",i,vet[i]);
   
   printf("\nNome %s esta na posicao %d\n",n, PesqSeq(vet,n,MAX));
   
   system("pause");   
}
