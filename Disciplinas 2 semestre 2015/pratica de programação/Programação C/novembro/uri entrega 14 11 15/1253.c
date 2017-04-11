#include<stdio.h>
#include<string.h>
int main(){
	int a,b,c,e;
	char d[50];
	scanf("%d",&a);
	for(;a>0;a--){
		scanf("%s %d",d,&b);
		for (c=0;c<50;c++){
			if (d[c]=='\0')
			break;
			else if((d[c]-b)>=65)
				e=d[c]-b;
			else
				e=(d[c]-b)+26;
			printf ("%c",e);
		}
		printf("\n");		
	}
	system("pause");
}
