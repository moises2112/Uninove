#include <stdio.h>
main () {
	/*calculos sobre veiculos*/
	int m,c,pm,pc,tp,tv;
	printf ("Informe numero de motos:\n");
	scanf ("%d",&m);
	pm=m*2;
	printf ("\nInforme numero de carros:\n");
	scanf ("%d",&c);
	pc=c*4;
	tp=pm+pc;
	tv=m+c;
	printf ("Quantidade total de pneus de motos: %d\n",pm);
	printf ("Quantidade total de pneus de carros: %d\n",pc);
	printf ("Quantidade total de pneus: %d\n",tp);
	printf ("Quantidade total de veiculos: %d\n",tv);
	system ("pause");	
}
