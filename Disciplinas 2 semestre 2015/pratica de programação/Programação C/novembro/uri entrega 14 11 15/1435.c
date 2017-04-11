#include <stdio.h>

int main(){
   int a, i, j;
   
   while(scanf("%d", &a), a!=0){//guarda a ordem da matriz e verifica se for 0 para finalizar
      int mat[a][a], p=1, c=0, k, f=a;
      
      k=0; while(k<a){//laços que atribui os valores a matriz
         i=c; while(i<f){
            j=c; while(j<f){
               mat[i][j]=p;
            j++;}
         i++;}
      p++;
      c++;
      f--;
      k++;}
      
      i=0; while(i<a){//laços que imprime a matriz com campo de ordem 3
         j=0; while(j<a){
            printf("%3d", mat[i][j]);
			if (j<(a-1))
				printf(" ");
			j++;}
         printf("\n");
      i++;}
    printf("\n")  ;
   }
system("pause");
}
