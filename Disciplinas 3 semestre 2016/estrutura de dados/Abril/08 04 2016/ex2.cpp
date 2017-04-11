#include <stdlib.h>
#include <stdio.h>

void ssort (int v[], int t)
{
     int i, j, min, k;
     
     for (i=0;i<(t-1);i++)
     {
         min = i;
         
         for (j=(i+1);j<t;j++)
         {
             if (v[j]<v[min])
             min = j;
             }

             if (i!=min)
             {
                        k=v[i];
                        v[i]=v[min];
                        v[min]=k;
                        
                        }
                        }
                        }               
                        
     main () {

     int i,m;     
     int v[12];
     
     for (m=0;m<12;m++){       
     printf("Digite a temperatura do %d mes do ano: ",m+1);
     scanf("%d", &v[m]);
     }
     ssort(v,12);

     printf("\n\nVetor Ordenado!\n\n");
     
     for (i=0;i<12;i++) 
     printf("%d\n",v[i]);
     
     printf("\n\nA maior temperatura eh %d, e a menor temperatura eh %d.", v[11], v[0]);
     
     system("pause>>null");
     
     }
