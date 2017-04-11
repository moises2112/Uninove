#include <stdio.h>
#define MAX 100
main() {
	int n=1;
	int m=0;
	int o;
	int p=0;
	do {
	o=n;
	n+=m;
	if (p<2){while (p<2){
	printf ("%d \t", n);
	++p;}}
	else {printf ("%d \t", n);
	}
	m=o;
	}while (n<MAX);
	system ("pause");}
