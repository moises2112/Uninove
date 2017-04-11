#include <stdio.h>
int main() {
    float x1,x2,y1,y2,a;
    scanf ("%f%f",&x1,&y1);
    scanf ("%f%f",&x2,&y2);
    a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));//sqrt: função que passa raiz quadrada e pow: função que eleva a potencia escolhida no caso 2
    printf ("%.4f\n",a);
system("pause");
}

