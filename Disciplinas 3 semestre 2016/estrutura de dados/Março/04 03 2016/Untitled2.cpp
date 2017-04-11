#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

void lista (char M[][50],int a){
     printf("oi");
     for (int i=0;i<MAX;i++)
         scanf("%s",M[i]);
}

void ord (char M[][50],int a){
     int c,d;
     char k[1][50];
     for (c=0;c<MAX-1;c++)
         for(d=0;d<MAX-(c+1);d++)
             if(strcmp(M[d],M[d+1])>0){
                strcpy(k[0],M[d]);
                strcpy(M[d],M[d+1]);
                strcpy(M[d+1],k[0]);
             }
}

void mostord(char M[][50],int a){
     for (int a=0;a<MAX;a++)
         printf("%s\n",M[a]);    
}

int main(){
       char nome[MAX][50];
       lista(nome,MAX);
       ord(nome,MAX);
       mostord(nome,MAX);
       system("pause");
       }


         
