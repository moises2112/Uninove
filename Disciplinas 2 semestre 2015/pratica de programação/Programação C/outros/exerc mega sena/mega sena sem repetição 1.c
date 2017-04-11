#include <stdio.h>
#include <time.h>
#define linha 
#define coluna 6
main (){
	int mega [linha][coluna],a,b,c;
    srand (time(0));
	for (a=0;a<linha;b++)
	    for (b=0;b<coluna;b++)
		    mega [a][b]=rand()%60+1;
	for (a=0;a<linha;a++)
	     for (b=0;b<coluna;b++)
	         printf ("%d\t",mega[a][b]);
system ("pause");}
