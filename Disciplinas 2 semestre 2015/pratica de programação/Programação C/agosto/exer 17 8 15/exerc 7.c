#include <stdio.h>
main (){
	int a,b,c,d;
	printf ("Digite sua data de nascimento");
	scanf ("%d",a);
		if (a<2002)
		{d=2002-a;
		printf ("Sua idade na copa de 2002 e: %d \n",d);}
		else
		printf ("Voce nao tinha nascido.");
		if (a<1994)
		{d-=8;
		printf ("Sua idade na copa de 1994 e: %d \n",d);}
		else
		printf ("Voce nao tinha nascido.");
		if (a<1970)
		{d-=24;
		printf ("Sua idade na copa de 1978 e: %d \n",d);}
		else
		printf ("Voce nao tinha nascido.");
		if (a<1962)
		{d-=8;
		printf ("Sua idade na copa de 1962 e: %d \n",d);}
		else
		printf ("Voce nao tinha nascido.");
		if (a<1958)
		{d-=4;
		printf ("Sua idade na copa de 1958 e: %d \n",d);}
		else
		printf ("Voce nao tinha nascido.");
		system ("pause");}

