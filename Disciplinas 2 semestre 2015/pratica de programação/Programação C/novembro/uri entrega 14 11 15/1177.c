#include<stdio.h>
#define max 1000
int main(){	
	int a,N[max],c=0,d;
	scanf("%d",&a);
	while(c<max){
		for (d=0;d<a;d++){
			if (c==max)
				break;
			N[c]=d;
			c++;
		}
	}
	for(d=0;d<max;d++){
		printf("N[%d] = %d\n",d,N[d]);
	}
	system("pause");
}

