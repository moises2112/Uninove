#include <stdlib.h>
#include <stdio.h>
#define MAX 3

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
        printf("I = %d J = %d K = %d T = %d V[0] = %d V[1] = %d V[2] = %d V[3] = %d V[4] = %d \n",i,j,k,t,vet[0],vet[1],vet[2],vet[3],vet[4]);
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
           printf("I = %d J = %d K = %d T = %d MIN = %d V[0] = %d V[1] = %d V[2] = %d V[3] = %d V[4] = %d \n",i,j,k,t,min,vet[0],vet[1],vet[2],vet[3],vet[4]);                      
     }    
     if (i!=min)
     {
        k=vet[i];
        vet[i]=vet[min];
        vet[min]=k;
     }
           printf("I = %d J = %d K = %d T = %d MIN = %d V[0] = %d V[1] = %d V[2] = %d V[3] = %d V[4] = %d \n",i,j,k,t,min,vet[0],vet[1],vet[2],vet[3],vet[4]);                           
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
           printf("I = %d J = %d K = %d T = %d V[0] = %d V[1] = %d V[2] = %d V[3] = %d V[4] = %d \n",i,j,k,t,vet[0],vet[1],vet[2],vet[3],vet[4]);           
           vet[j+1]=vet[j];
           j--;
     }      
     vet[j+1]=k;
     printf("I = %d J = %d K = %d T = %d V[0] = %d V[1] = %d V[2] = %d V[3] = %d V[4] = %d \n",i,j,k,t,vet[0],vet[1],vet[2],vet[3],vet[4]);     
   } 
}

int main()
{
 int i;
 int v[MAX];
do
{ 
system("cls");
 printf("Digite os numeros diferentes: \n\n");
 for (i=0;i<MAX;i++)
 {
   printf("Entre com um numero: ");
   scanf("%d",&v[i]);    
 }
 bsort(v,MAX);
 printf("\nVetor ordenado \n");
 for (i=0;i<MAX;i++)
   printf("V[%d]=%d\n",i,v[i]);
    
 system("pause");
}while(1==1); 
 return 0;   
}
