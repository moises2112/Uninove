#include<stdio.h>
#include<stdlib.h>


int main (){
	
	int MAX,i, m,a=0;
	int op; 
	 
	printf("Digite o tamanho para matriz quadrada:\n");
	scanf("%d",&MAX);
	printf("Digite %d valores para matriz:\n",MAX*MAX); 
	
	int matriz[MAX][MAX];
	
	for ( i=0;i<MAX;i++)
		for ( m=0;m<MAX;m++)
			scanf("%d", &matriz[i][m]);
			

    
    do{
	
	printf("Digite a opcao:\n");
	printf("0-Sair\n");
    printf("1-Matriz diagonal\n");
    printf("2-Matriz secundaria\n");
    printf("3-Matriz triangular superior\n");
    printf("4-Matriz triangular inferior\n");
    printf("5-Soma dos elementos da matriz\n");
    scanf("%d",&op);
    
    system("cls");
    for (i=0;i<MAX;i++){
		for (m=0;m<MAX;m++)
			printf("%d \t",matriz[i][m]);
		printf("\n");
    }
	switch (op){
		
		case 1:
			m=0;
			a=0;
			for (i=0;i<MAX;i++){
				for(;m==i;m++)
					a+=matriz[i][m];
			}
			printf("O resultado da matriz diagonal:\t%d\n",a);
			break;
		
		case 2:
		
			m=MAX-1;
			a=0;
			for (i=0;i<MAX;i++){
				a+=matriz[i][m];
				m-=1;
			}
			printf("O resultado da matriz secundaria:\t%d\n",a);
			break;
		
		case 3:
			
			a=0;
			for (i=0;i<MAX;i++)
				for(m=0;m<MAX;m++)
					if(m>i)
						a+=matriz[i][m];
			printf("O resultado da matriz triangular superior:\t%d\n",a);
			break;
		
		case 4:
		
			a=0;
			for (i=0;i<MAX;i++)
				for(m=0;m<MAX;m++)
					if(m<i)
						a+=matriz[i][m];
			printf("O resultado da matriz triangular inferior:\t%d\n",a);
			break;
		
		case 5:
			
			a=0;
			for (i=0;i<MAX;i++)
				for (m=0;m<MAX;m++)
					a+=matriz[i][m];
			printf("O resultado da soma dos elemetos da matriz:\t%d\n",a);
			break;	
		
	}
	}while(op>0);

system("pause>>null");
}
		
		
		
	

