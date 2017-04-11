#include <stdio.h>
#include <stdlib.h>

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

main()
{
 int i;
 int v[10]= {12,67,98,3,45,34,2,89,90,23};

 bsort(v,10);
 printf("\nVetor ordenado \n");
 for (i=0;i<10;i++)
   printf("V[%d]=%d\n",i,v[i]);
 
 printf("\nMaior elemento: %d \n", v[0]);
 printf("Menor elemento: %d \n\n", v[9]);
    
 system("pause"); 
}
