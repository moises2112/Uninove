#include <stdio.h>
#include <stdlib.h>
#define MAX 9

void BSORT (int v[]){
     int i,j,k=0;
     for(i=0;i<MAX-1;i++){
         for(j=0;j<MAX-(i+1);j++){
             if(v[j]>v[j+1]){
                k=v[j];
                v[j]=v[j+1];
                v[j+1]=k;
             }
         }
     }
}

 void mostvet (int v[]){
      for(int a=0;a<MAX;a++)
          printf ("%d\t",v[a]);
      printf ("\n");
}

main (){
     int v[MAX]={6,2,1,3,4,5,8,7,0};
     printf ("Vetor desordenado\n");
     mostvet (v);
     BSORT (v);
     printf ("Vetor ordenado\n");
     mostvet (v);
     system("pause>>null");
     
}
