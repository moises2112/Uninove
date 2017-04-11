#include <stdio.h>
#define MAX 10
 main (){
 	int a,b,c;
 	b=2;
 	a=1;
 	for (c=1;c<=MAX;++c){
 		printf ("%d \t", a);
 		a+=b;
 		b++;
	 }
 	system ("pause");
 }
