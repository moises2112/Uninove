#include <stdio.h>
#include <time.h>
#define LINHA 2000
#define COLUNA 6

main (){
	int mega[LINHA][COLUNA],a,b,c;
	srand( time(NULL) );//faz com que a cada execução nao se repita
    for (a=0;a<LINHA;a++)
	     for (b=0;b<COLUNA;b++)
	         mega[a][b]=rand()%60+1;//gera numeros aleatorios de 1 a 60
    for (a=0;a<LINHA;a++){ //verificar se os numeros da mesma linha sao iguais
        for (b=0;b<COLUNA;b++)
             for (c=0;c<COLUNA;c++) {
             do {if ((mega[a][b]==mega[a][c])&&(c!=b)){
                    mega[a][b]=rand()%60+1;
                    b=0;}
               } while((mega[a][b]==mega[a][c])&&(c!=b));}
	     printf("\n");}
    for (a=0;a<LINHA;a++){//imprimi os resultados
        printf ("linha %d:\t",a+1);
        for (b=0;b<COLUNA;b++)
             printf ("%d\t",mega[a][b]);
        printf ("\n");}
    for (a=0;a<LINHA;a++)//verifica se o numero repete na mesma linha e se for o caso o troca
        for (b=0;b<COLUNA;b++)
             for (c=b+1;c<=5;c++) 
                if (mega[a][c]==mega[a][b])
                    printf ("O numero:%d, Na linha %d , se repete na coluna %d e na coluna %d.\n",mega[a][b],a+1,b+1,c+1);
	     system ("pause");
}
