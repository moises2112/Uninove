#include <stdio.h>
#include <stdlib.h>
#include <operacoes.h>

float a,b,c;
int main(){
char d;
printf("Digite 2 numeros:\n");
scanf("%f%f",&a,&b);
printf("Escolha a operacao:\n+\t-\t/\t*\n");
scanf("%s",&d);
      switch (d){
       case '+':
            printf ("Voce escolheu somar\n");
            c=soma(a,b);
            printf ("O resultado e=%.2f",c);
       break;
       case '-':
            printf ("Voce escolheu subtracao\n");
            c=subtracao(a,b);
            printf ("O resultado e=%f",c);
       break;
       case '/':
            printf ("Voce escolheu divisao\n");
            c=divisao(a,b);
            printf ("O resultado e=%f",c);
       break;
       case '*':
            printf ("Voce escolheu multiplicacao\n");
            c=multiplicacao(a,b);
            printf ("O resultado e=%f",c);
       break;
       default:
             printf("Operacao nao reconhecida");
      }
system ("pause");

}
       
