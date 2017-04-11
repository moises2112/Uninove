#include <stdio.h>
#include <stdlib.h>
#define max1 10
#define max2 20
int lervetor(int vet1[], int vet2[]){
    int b;
    printf("Digite os %d valores para o vetor A:\n",max1);
    for(b=0;b<max1;b++)
        scanf("%d",&vet1[b]);
    printf("Digite os %d valores para o vetor B:\n",max1);
    for(b=0;b<max1;b++)
        scanf("%d",&vet2[b]);
}

int vetorc(int vet1[], int vet2[],int vet3[]){
    int b;
    for(b=0;b<max1;b++){
        vet3[b]=vet1[b];
        vet3[b+max1]=vet2[b];
    }
}

int mostvetorc(int vet3[]){
    system("cls");
    int b;
    for (b=0;b<max2;b++)
        printf("Vetor C[%d] = %d\n",b+1,vet3[b]);
}

int main(){
       int v1[max1],v2[max1],v3[max2];
       lervetor(v1,v2);
       vetorc(v1,v2,v3);
       mostvetorc(v3);
       system("pause>>null");
}
