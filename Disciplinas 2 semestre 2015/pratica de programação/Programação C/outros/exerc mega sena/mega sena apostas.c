#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 2000
#define COLUNA 6
#define APOSTA 5

main (){
	int mega[60][3],resultado [LINHA][COLUNA],aposta[APOSTA][COLUNA];
	int a,b,c,d,e,aleatoria;
	
	srand( time(NULL) );//numeros nao se repetem quando codigo é ezecutado de novo
	
	
	for(a=0;a<60;a++){
	   	mega[a][0] = a+1;//coluna para numeros que podem ser sorteados
		mega[a][1] = 0;	//coluna para verificar se ja sai um numero na mesma rodada
		mega[a][2] = 0;//coluna para contar quantas vezes o numero apareceu nos jogos
	}
	
	
	
	/*for(a=0;a<60;a++){//verifica as posiçoes das linhas e seus valores
		printf("Valor [%d] = %.2d\n", a, mega[a][0] );	
	  }*/
	  
	  
	  
	for (a=0;a<LINHA;a++){
		for (b=0;b<COLUNA;b++){
			aleatoria=rand()%60;
			while (mega[aleatoria][1]==1){
			      aleatoria=rand()%60;}
		    mega[aleatoria][1]=1;
		    mega[aleatoria][2]+=1;
			resultado[a][b]=(aleatoria+1);    
		}   
		for (c=0;c<60;c++)
			mega[c][1] = 0;  //zera a coluna que verifica se o numero saiu
    }
    
    
    for (a=0;a<LINHA;a++){//imprimi os jogos sorteados
	    printf ("Jogo  (%d) =\t",a+1);
	    for (b=0;b<COLUNA;b++)
	    	printf ("%.2d\t",resultado[a][b]);
	    printf ("\n");
	    /*c=a+1;
	    	if (c%100==0){
	    		c=0;
	    		system("pause");}*/
   }
   
   
   
   for (a=0;a<LINHA;a++)//verifica se o numero repete na mesma linha  e informa onde se repete
        for (b=0;b<COLUNA;b++)
             for (c=b+1;c<=5;c++) 
                if (resultado[a][c]==resultado[a][b])
                    printf ("O numero:%d, Na linha %d , se repete na coluna %d e na coluna %d.\n",resultado[a][b],a+1,b+1,c+1);
	
	
	
	for (a=0;a<APOSTA;a++){//armazena os numeros escolhidos pelo usuario
		printf("Digite a aposta %d:\n",a+1);
		for (b=0;b<COLUNA;b++)
			scanf("%d",aposta[a][b]);
	}
	
	
	for (a=0;a<LINHA;a++){//verifica quantos numeros acertaram
        printf ("Voce acertou no jogo %d",a+1);
		for (d=0;d<APOSTA;d++){
			printf ("Voce acertou na aposta %d",d+1);
			for (b=0;b<COLUNA;b++)
            	 for (c=0;c<COLUNA;c++) {
                	if (aposta[d][c]==resultado[a][b]){
                    	e+=1;
                    	printf ("\t%d",aposta[d][c]);}
					if((c==5)&&(e==4))
					  printf("\nAcertou na quadra.\n");
					else if((c==5)&&(e==5))
					  printf("\nAcertou na quina.\n");
					else if((c==5)&&(e==6))
					  printf("\nAcertou na sena.\n");}
		e=0;
		}
			}
	
	system("pause");}
