#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int guardavalor(int v[],int a){
    printf ("Digite os valores:\n");
    for (int b=0;b<MAX;b++)
        scanf("%d",&v[b]);
    
        
    }
    
int ordbsort(int v[],int a){
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
int pesquisa(int v[],int b){
    int a=-1;
    while (a<MAX && v[a]!=b){
        a++;
        if (v[a]==b)
           printf ("O valor procurado esta na posicao %d\n",a);
        else if (v[a]>b)
             printf ("O valor procurado nao esta dentre os numeros\n");
        else if (a==MAX-1)
                printf ("O valor procurado nao esta dentre os numeros\n");
    }

}

void mostrarvetor(int v[]){
     for (int a=0;a<MAX;a++)
         printf("%d\t",v[a]);
}

main(){
       int c=1;
       while(c==1){
             int a, b[MAX];
             guardavalor(b,MAX);
             ordbsort(b,MAX);
             printf ("Digite o valor que esta procurando:\n");
             scanf("%d", &a);
             pesquisa(b,a);
             mostrarvetor(b);
             printf ("Caso queira repetir o programa aperte 1\n");
             scanf ("%d",&c);
             if (c!=1)
                printf("Adeus\n");
             system("pause");
       }
}
