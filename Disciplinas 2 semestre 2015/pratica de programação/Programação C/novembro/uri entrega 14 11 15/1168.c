#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    //declaração de variaveis//
      
    char a[1000];            
    int b,c,soma=0,i,j;                         
     
     
   /* Ler dados */
     
    scanf("%d", &b); 
          
         /* Estrutura de repetição*/
          
        for(i=0 ; i < b ; i++){             
            scanf("%s", a);                 
                for(j=0;j< strlen(a) ; j++){
                           if(a[j] == '1')
                                soma+=2;
                           else if(a[j] =='2'||a[j] =='5'||a[j] =='3')
                                soma+=5;
                           else if(a[j] == '4')
                                soma+=4;
                           else if(a[j] == '6'||a[j] =='9'||a[j] =='0')
                                soma+=6;
                           else if(a[j]== '7')
                                soma+=3;
                           else if(a[j] == '8')
                                soma+=7;
                }
            printf("%d leds\n",soma);                       
            soma = 0;
        }
system("pause");
}
