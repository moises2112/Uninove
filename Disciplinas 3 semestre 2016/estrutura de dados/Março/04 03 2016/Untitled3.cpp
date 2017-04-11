#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void BSORT (int v[],int t){
     int i,j,k=0;
     for(i=0;i<MAX-1;i++){
         for(j=0;j<MAX-(i+1);j++){
             if(v[j]>v[j+1]){
                k=v[j];
                v[j]=v[j+1];
                v[j+1]=k;
             }
         }
     }
}


void SSORT (int v[],int t){
     int i,j,min,k;
     for(i=0;i<MAX-1;i++){
         min=i;                
         for(j=(i+1);j<MAX;j++){
             if(v[j]<v[min])
               min=j;
             }
             if(i!=min){
                k=v[i];
                v[i]=v[min];
                v[min]=k;                           
             }
         }
     }
     
void ISORT (int v[],int t){
     int i,j,k;
     for(i=1;i<MAX;i++){
         k=v[i];            
         j=i-1;
         while(j>=0&&v[j]>k){
             v[j+1]=v[j];
             j--;
         }
         v[j+1]=k;
     }
}
     
void MOSTVET(int v[],int t){
     for (int a=0;a<MAX;a++)
         printf("%d\t",v[a]);
}


main(){
     int vt1[MAX]={8,7,10,15,12,28,6,18,20,5};
     int vt2[MAX]={8,7,10,15,12,28,6,18,20,5};
     int vt3[MAX]={8,7,10,15,12,28,6,18,20,5};
     BSORT (vt1,MAX);
     SSORT (vt2,MAX);
     ISORT (vt3,MAX);
     MOSTVET(vt1,MAX);
     MOSTVET(vt2,MAX);
     MOSTVET(vt3,MAX);
     system("pause");}


