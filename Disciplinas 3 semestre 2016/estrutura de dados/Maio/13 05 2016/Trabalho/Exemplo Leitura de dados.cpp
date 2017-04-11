#include <stdlib.h>
#include <stdio.h>

main()
{
   int vet[10];
   
   printf("\nEntre com 10 numeros inteiros\n");
   for(int i=0; i<10;i++)
   {
     printf("v[%d]=",i);   
     scanf("%d",&vet[i]);
   }
   
   system("pause");   
}
