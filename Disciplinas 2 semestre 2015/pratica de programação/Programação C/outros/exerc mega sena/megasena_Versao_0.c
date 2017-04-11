#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	
	int mega[61][3];
	int resultados [2000][7];
	int apostas[10][7];
	
	int x,y,z,sorteio, Novo_sorteio, menor, maior;
	
	// inicio 
	for(x=1;x<=60;x++){
		mega[x][0] = x;	
		mega[x][1] = 0;	
		mega[x][2] = 0;
	}
	system ("Color f0");
	// Exibir a matriz dos numeros  (se necessário)
	for(x=1;x<=60;x++){
		//printf("\nValor [%d] = %d", x, mega[x][0] );	
	}
	
	// Gerar o numero aleatório inicial ao RAND
	srand(time(NULL));
	
	// Iniciar os 2000 resultados da MEGASENA
	for (x=1; x<2000; x++){
    	for (y=1; y<=6; y++){
			
			// Escolher o numero aleatorio
			sorteio = (rand() % 60) + 1;
			
			// procura de numeros repetidos
			while(mega[sorteio][1] == 1){
				sorteio = (rand() % 60) + 1;
			}
            
            // Informa sobre o numero utilizado
            mega[sorteio][1] = 1;
            
            // Contar quantas vezes saiu o sorteio do numero
            mega[sorteio][2] += 1;
            
            
            // Informar o numero sorteado 
			resultados[x][y] = sorteio;
		
        }

	    
	    // Zerar os numeros sorteados
	   	for (z=1;z<=60;z++){
			mega[z][1] = 0;  
        }
	}
	
	
    // EXIBIR os resulados da MEGASENA 
	for (x=1; x<=2000; x++){
    
			printf("\nJogo(%d) | %.2d - %.2d - %.2d - %.2d - %.2d - %.2d ", x, resultados[x][1], resultados[x][2], resultados[x][3], resultados[x][4], resultados[x][5], resultados[x][6] );
			
			if(x%200 == 0){
                printf("\n");
                system("pause");
            }
    }
	
	printf("\n");
	system("pause");
	
}
