#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void ord (int v[],int t){
     int i,j,k=0;
     for(i=0;i<t-1;i++){
         for(j=0;j<t-(i+1);j++){
             if(v[j]>v[j+1]){
                k=v[j];
                v[j]=v[j+1];
                v[j+1]=k;
             }
         }
     }
}


void mostord(int v[]){
     for (int i=0;i<MAX;i++)
         printf("%d\t",v[i]);
}

void mostmaiormenor (int v[]){
     printf("menor %d\n",v[0]);
     printf("maior %d\n",v[MAX-1]);
}

main (){
     int vt[MAX]={8,7,10,15,12,28,6,18,20,5};
     ord (vt,MAX);
     mostord(vt);
     mostmaiormenor(vt);
     system("pause");}
