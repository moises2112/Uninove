#include<stdio.h>
#include<stdlib.h>
#define LIMITE 10
main(){
       
       int l,c,x[LIMITE][LIMITE];
       
       for(l=0;l<LIMITE;l++){
          for(c=0;c<LIMITE;c++){
            if(l+c ==LIMITE-1)
              x[l][c]=1;
            else 
              x[l][c]=0;
            printf("%d ",x[l][c]);}
             
             printf("\n");
                        }
       
       system("pause");
       
       
       }

