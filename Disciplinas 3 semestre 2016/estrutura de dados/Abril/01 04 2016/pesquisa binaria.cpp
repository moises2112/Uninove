#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

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

int pesqbin(int v[], int busca)
{
    int inicio,fim,meio;
    inicio=0;
    fim=MAX;
    while (inicio+fim){
          meio=(inicio+fim)/2;
          if(v[meio]==busca)
             return meio;
          if (busca<v[meio])
             fim=meio-1;
          else 
               inicio=meio+1;
    }
    return -1;
}

int main(){
    int v[MAX];
    for (int a=0;a<MAX;a++)
    	scanf("%d",&v[a]);
    int busca;
    printf("Digite o valor ");
    scanf("%d",&busca);
    ssort(v,busca);
    printf("\nO valor %d esta na posicao %d\n", busca,pesqbin(v,busca));
    system ("pause>>null");
    }
