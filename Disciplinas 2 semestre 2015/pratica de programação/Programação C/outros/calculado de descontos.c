#include <stdio.h>
main (){
	float v,vd;
	printf ("Informe valor do produtos:");
	scanf ("%f",&v);
	if (v<=50){
		vd=v*0.05;
		printf ("O produto tem 5%% de desconto.\n Valor a ser cobrado:%.2f\n",vd);
	}
	else if (v>50 && v<100){
		vd=v*0.10;
		printf ("O produto tem 10%% de desconto.\n Valor a ser cobrado:%.2f\n",vd);
	}
	else {
		vd=v*0.20;
		printf ("O produto tem 20%% de desconto.\n Valor a ser cobrado:%.2f\n",vd);
		
	}
	system ("pause");}
