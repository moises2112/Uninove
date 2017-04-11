#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define COLUNA 100
#define LINHA 100

int bsort(char vet[][COLUNA],int b)
{
  int i,j;
  char k[COLUNA];    
  
  for (i=0;i<b-1;i++)
  {
    for (j=0;j<b-(i+1);j++)
    {
        if (strcmp(vet[j],vet[j+1])>0)
        {
          strcpy(k,vet[j]);
          strcpy(vet[j],vet[j+1]);
          strcpy(vet[j+1],k);
        }
    }     
  }
}

int PesqSeq(char vet[][COLUNA], char busca[])
{
   int i;
   fflush(stdin);
   for (i=0; i<COLUNA; i++)
   {   
       if (strcmp(vet[i],busca)==0)
          return i;
       else
          if (strcmp(vet[i],busca)>0)
             return -1;
   } 
   return -1;
}

int mostra(char vet[][COLUNA],int b)
{
  for (int i=0; i<b; i++)     
      if(strcmp(vet[i],"CLIENTE EXCLUIDO")!=0)
             printf("%s\n",vet[i]);  
    
}


void recebe(char vet[][COLUNA],int b)
{
    fflush(stdin);
    gets(vet[b]); 
}

main (){
 
  int swt,a,b=0,c;
  char mat[LINHA][COLUNA],busca[COLUNA];
  
     

     do{
     printf("1 - Cadastrar Clientes\n");
     printf("2 - Remover Cliente\n");
     printf("3 - Busca pelo nome do Cliente\n");
     printf("4 - Mostrar todos os Clientes cadastrados\n");
     printf("5 - Saida.\n");
     printf("Opcao: ");
     scanf("%d",&swt);
     printf("\n");  
     switch(swt){
     case 1:
            do{
            c=0;  
            printf("Digite o novo nome:");
            recebe(mat,b);
            for(a=0;a<b;a++)
                if(strcmp(mat[a],mat[b])==0)
                   c=1000;
            }while(c==1000);
            b++;           
            break;
     case 2:
            printf("Digite o nome para deletar:");
            scanf("%s",busca);
            if (PesqSeq(mat,busca)!=-1)
                strcpy(mat[PesqSeq(mat,busca)],"CLIENTE EXCLUIDO");
            break;
     case 3:
            printf("Digite o nome para busca:");
            scanf("%s",busca);
            if (PesqSeq(mat,busca)!=-1)
                printf("Nome existe na linha %d\n",PesqSeq(mat,busca)+1);
            else
                printf("Nome nao existe\n");
            break;
     case 4:
            mostra(mat,b);
            break;
     

     case 5:
            printf("Adeus");
            break;
     }
     bsort(mat,b);
     }while(swt!=5);
     system ("pause>>null");
     
     
}
