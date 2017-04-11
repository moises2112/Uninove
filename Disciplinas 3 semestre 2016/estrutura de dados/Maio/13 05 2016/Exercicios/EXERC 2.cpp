#include <stdio.h>
#include <stdlib.h>
#define MAX 10


void SSORT (int v[]){
     int i,j,min,k;
     for(i=0;i<MAX-1;i++){
         min=i;                
         for(j=(i+1);j<MAX;j++){
             if(v[j]<v[min])
               min=j;
             }
             if(i!=min){
                k=v[i];
                v[i]=v[min];
                v[min]=k;                           
             }
         }
     }


int PesqBin(int vet[], int busca){
   int inicio, fim, meio;
   
   inicio = 0;
   fim = MAX-1;
   
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

   


void armvet(int v[]){
     printf("Digite %d numero(s)\n",MAX);
     for (int a=0;a<MAX;a++)
         scanf("%d",&v[a]);
}

void mostvet (int v[]){
      for(int a=0;a<MAX;a++)
          printf ("%d\t",v[a]);
      printf ("\n");
}

main(){
       int v[MAX],a;
       armvet (v);
       printf("Digite o valor que esta procurando\n");
       scanf("%d",&a);
       printf ("Vetor desordenado\n");
       mostvet(v);
       SSORT (v);
       if (PesqBin(v,a)==-1)
          printf ("O valor procurado nao existe\n");
       else 
          printf ("O valor procurado existe\n");
       printf ("Vetor ordenado\n");
       mostvet(v);
       
system("pause>>null");
}
     
     
