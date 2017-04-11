#include <stdio.h>
int main() {
    double pi=3.14159,A,B,C,tr,ci,tp,qd,rt;
    scanf ("%lf%lf%lf",&A,&B,&C);
    tr=(A*C)/2;
    ci=C*C*pi;
    tp=((A+B)*C)/2;
    qd=B*B;
    rt=A*B;
    printf ("TRIANGULO: %.3lf\n",tr);
    printf ("CIRCULO: %.3lf\n",ci);
    printf ("TRAPEZIO: %.3lf\n",tp);
    printf ("QUADRADO: %.3lf\n",qd);
    printf ("RETANGULO: %.3lf\n",rt);
system("pause");
}
