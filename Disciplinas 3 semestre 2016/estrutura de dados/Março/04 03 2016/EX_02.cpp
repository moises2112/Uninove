#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

main()
{
 int i;
 char v[5][20]= {"Jose","Maria","Marcos","Antonio","Fabio"};
   
 bsort(v,5);
 printf("\nVetor ordenado \n");
 for (i=0;i<5;i++)
   printf("V[%d]=%s\n",i,v[i]);
    
 system("pause"); 
}
