#include <stdio.h>  
#include <stdlib.h>    
// definição da estrutura Data  
struct Data {   
     int dia, mes, ano; 
     char nome[100];  
};   
 
main () {  
      // declaracao de uma variavel da estrutura   
      struct Data umaData; 
      // leitura do campo dia
      printf ("Dia: "); 
      scanf ("%d", &umaData.dia); 
      // leitura do campo mes
      printf ("Mês: "); 
      scanf ("%d", &umaData.mes); 
      // leitura do campo ano
      printf ("Ano: "); 
      scanf ("%d", &umaData.ano);
      printf ("Nome: ");
      scanf ("%s",&umaData.nome);
      // impressão da tada informada
      printf ("\n*** Data Informada ***\n");  
      printf ("%d / %d / %d\n%s\n", umaData.dia, umaData.mes, umaData.ano,umaData.nome); 
      system ("PAUSE");
}
