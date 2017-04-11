#include<stdio.h>
#include <stdlib.h>



int main(){
    int a,i,j,b;
    scanf("%d",&a);
    for(i=0;i<a;i++){
         scanf("%d",&b);
         float soma=0,c[b],media,s=0,t=0;
         for(j=0;j<b;  j++){
            scanf("%f",&c[j]);
            soma=soma+c[j];
      }
      media=soma/b;       
      for(j=0;j<b;j++){
            if(c[j]>media)
                t+=1;
      }
      s = 100*(t/b);
      printf("%.3f%%\n",s);
    }
system("pause");
}
