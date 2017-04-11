#include <stdio.h>
main (){
	int a,b,c,d,e,f=1;
	while (f==1)
	{
	for (d=0;d<6;d++){
		printf ("Digite um numero inteiro \n");
		scanf ("%d",&a);
		b=a%2;
		if (d==0&&a>10&&b==0){
			c=a;}
		else if (b==0&&a>10){
			c+=a;
			++e;}}
	++e;
	c/=e;
	printf ("A media dos numeros pares e maiores que 10 digitados e: %d \n",c);
	e=0;
	scanf ("%d",&f);}
	system ("pause");
}
