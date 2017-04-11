#include<stdio.h>
int main(){
	int N[20],i,a=19,Y;
	for (i=0;i<20;i++)
		scanf ("%d",&N[i]);
	for (i=0;i<=9;i++){
		Y=N[i];
		N[i]=N[a];
		N[a]=Y;
		a--;}
	for (i=0;i<20;i++)
		printf("N[%d] = %d\n",i,N[i]);
system("pause");}
