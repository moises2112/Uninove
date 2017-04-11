#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main(){
	int a,b,c=MAX;
	
	int v[MAX]={9,4,1,7,8,2,5,3,6,0};
	printf("%d %d %d %d %d %d %d %d %d %d\n",v[0],v[1],v[2],v[3],v[4],v[5],v[6],v[7],v[8],v[9]);
	for(a=0;a<c-1;a++){
		if(v[a]>v[a+1]){
			b=v[a];
			v[a]=v[a+1];
			v[a+1]=b;
		}
		if(a==c-2){
			a=-1;
			c--;
		}
		printf("%d %d %d %d %d %d %d %d %d %d\n",v[0],v[1],v[2],v[3],v[4],v[5],v[6],v[7],v[8],v[9]);
	}
	for(a=0;a<MAX;a++)
		printf("%d \t",v[a]);
	
	
}

