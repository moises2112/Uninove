#include <stdio.h>
#include <string.h>

int main(){
	int a;
	while(scanf("%d", &a), a!=0){//guarda a ordem da matriz e verifica se for 0 para finalizar
		int b[a][a],c,d,e,f=0;
		b[0][0]=1;
		for (c=0;c<a;c++){
			d=0;
			if(c>0)
				b[c][d]=b[c-1][d]*2;
			for (d=0;d<a;d++){
				if(d>0)
					b[c][d]=b[c][d-1]*2;
			}
		}
		for (c=0;c<a;c++){
			for (d=0;d<a;d++){
				f=0;
				for	(e=b[a-1][a-1];e!=0;e/=10)
					f++;	
				for	(e=b[c][d];e!=0;e/=10)
					f--;
				for (e=0;e<f;e++)
					printf(" ");
				printf("%d",b[c][d]);
				if (d<(a-1))
					printf (" ");
			}
			printf("\n");
		}
		printf("\n");
		}
}
