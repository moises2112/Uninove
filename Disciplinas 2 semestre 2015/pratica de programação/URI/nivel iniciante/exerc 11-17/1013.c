#include <stdio.h>
int main() {
    int A,B,C,x,y;
    scanf ("%d%d%d",&A,&B,&C);
    x=(A+B+abs(A-B))/2;//formula para descobrir qual é o maior dentre 2 numeros informados pelo usuario
    y=(C+x+abs(x-C))/2;
    printf ("%d eh o maior\n",y);
system("pause");
}
