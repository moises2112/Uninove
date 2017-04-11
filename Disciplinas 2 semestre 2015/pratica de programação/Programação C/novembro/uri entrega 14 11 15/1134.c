#include<stdio.h>
int main(){
	int a, qg=0,qa=0,qd=0;
	while(a!=4){
		scanf("%d",&a);
		switch(a){
			case 1: qa++;
			break;
			case 2: qg++;
			break;
			case 3: qd++;
			break;
			case 4:
			break;
		}
	}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",qa,qg,qd);	
	system("pause");
}
