#include <stdio.h>
#include <stdlib.h>
int main()
{
//int V[6]={1,2,3,4,5,6},c1, aux, cont, cont1,a=1;
int V[6]={6,4,5,3,2,1},c1, aux, cont, cont1,a=1;
printf("%d %d %d %d %d %d \n", V[0],V[1],V[2],V[3],V[4],V[5]);
for(c1=0;c1<6 && a==1;c1++){
	a=0;
	for( cont = 0; cont<6-1-c1;cont++){
		if( V[cont]>V[cont+1]){
			a=1;
			aux = V[cont];
			V[cont] = V[cont+1];
			V[cont+1	]=aux;	
			
		}
		printf("%d %d %d %d %d %d %d\n", V[0],V[1],V[2],V[3],V[4],V[5],a);
	}
}
}
