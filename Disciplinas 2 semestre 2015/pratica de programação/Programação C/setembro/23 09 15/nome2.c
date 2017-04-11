#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main (){
     int a,b,c;
     char nomes[10][100],letra;
     printf ("agenda\n");
     do{for (a=0;a<10;a++){
          printf ("Digite %d NOME=",a+1);
          gets (nomes[a]);    }
     printf ("\n\nLista de nomes\n\n");
     letra=getch();//armazena um valor sem imprimir na tela
     for (a=0;a<10;a++)
         if (nomes[a][0]==letra){// imprimi caracteres que começem com a  letra'a'
            b=strlen(nomes[a]);
            for (c=1;c<=(80-b)/2;c++)
                 printf (" ");
            printf ("%s\n",nomes[a]);}
            letra=getch();}while(letra=='a');//faz com que repita o que estiver dentro do DOWHILE se repita caso a comparação seja verdadeira
     system("pause");
     }
