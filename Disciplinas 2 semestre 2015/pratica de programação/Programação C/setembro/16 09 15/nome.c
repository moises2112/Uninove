#include <stdio.h>
#include <string.h>

main (){
     int x;
     char novo[100];
     char nome[100];
     char sobrenome[100];
     char nome_completo[100];
     
      printf("Digite seu nome:               ");
      scanf("%s",nome);
       
      printf("Digite seu sobrenome:          ");
      scanf("%s",sobrenome);
        
      printf("Digite seu nome completo:      ");
      fflush(stdin);//limpa memoria 
      gets(nome_completo);//atribui caracteres digitados à uma variavel
      strcpy(novo,nome_completo);
               
      printf("\nSeu nome e %s %s.\n\n",nome,sobrenome);
      printf("Seu nome completo e %s.\n\n",novo);
         
      x=strcmp (nome,sobrenome);
      if (x==0)
          printf ("\n Os valores sao iguais\n");
      else if(x<0)
          printf ("\n O valor de nome e menor\n");
      else 
          printf ("\n O valor de sobrenome e menor\n");
     system ("pause");
     
     }

