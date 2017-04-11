#include<stdio.h>
#include<stdlib.h>


int main (){
	
	int MAX, v[7]={1,0,0,0,0,0,0}, l=0, c=0, a=0;

	printf("Digite um tamanho para matriz quadrada:\n");
	scanf("%d",&MAX);
	int matriz[MAX][MAX];

	
	while (l<MAX){	
		
			if (v[0]==1){
				printf("Digite o valor para posição linha %d, coluna %d: \t ", l+1 , c+1);
				scanf("%d", &matriz[l][c]);
			}
		
			if(c==l)//	diagonal principal
					v[1]+=matriz[l][c];
			if(c+l==MAX-1)//	diagonal secundaria
					v[2]+=matriz[l][c];
			if(c>l)//	triangular superior
					v[3]+=matriz[l][c];
			if(c<l)//	triangular inferior
					v[4]+=matriz[l][c];
			v[5]+=matriz[l][c];//soma de todos os elementos da matriz
				
			if(c<MAX-1)
				c++;
		
			else{
				c=0;
				l++;
			}
	}
	v[6]=v[1]+v[2]+v[3]+v[4]+v[5];//soma dos 5 resultados anteriores
	printf("O resultado da matriz diagonal:\t%d\n",v[1]);
	printf("O resultado da matriz secundaria:\t%d\n",v[2]);
	printf("O resultado da matriz triangular superior:\t%d\n",v[3]);
	printf("O resultado da matriz triangular inferior:\t%d\n",v[4]);
	printf("O resultado da soma dos elemetos da matriz:\t%d\n",v[5]);
	printf("A soma dos 5 resultados anteriores:\t%d\n",v[6]);
	l=MAX;
	system("pause>>null");
}
	
