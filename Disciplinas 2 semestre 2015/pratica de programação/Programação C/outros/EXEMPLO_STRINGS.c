#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){

    char nome[100], outro_nome[100], sobrenome[100];
    int x;
    
    
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    //gets(nome);
    
    // Se o scanf for utilizado antes do gets, a função fflush(stdin); deve ser utilizada
    fflush(stdin);
    
    // FUNÇÃO DE COPIA DE STRING
    strcpy(outro_nome, nome);
    printf("\n\nO nome digitado foi: %s\n\n",outro_nome);
    
    
    printf("\n\nDigite o seu sobrenome: ");
    //scanf("%s", sobrenome);
    
    gets(sobrenome);
    
    printf("\n\n****************************\n\n");
    
    // Função de comparação entre STRINGS
    x = strcmp(nome,sobrenome);
    if (x == 0)
        printf("Nome e sobrenome sao iguais\n\n");
    else
        if (x<0)
            printf("O Nome e Menor\n\n");
        else    
            printf("O Sobrenome e Menor\n\n");
    
    // Função apenas para palavras com 5 caracteres!!
    printf("\nValores da tabela ASCII      (NOME): %.3d, %.3d, %.3d, %.3d, %.3d, %.3d, %.3d, %.3d, %.3d", nome[0], nome[1],nome[2],nome[3],nome[4],nome[5],nome[6],nome[7],nome[8]);
    printf("\nValores da tabela ASCII (SOBRENOME): %.3d, %.3d, %.3d, %.3d, %.3d, %.3d, %.3d, %.3d, %.3d", sobrenome[0], sobrenome[1],sobrenome[2],sobrenome[3],sobrenome[4],nome[5],nome[6],nome[7],nome[8]);
    
    
    printf("\n\nO tamanho da primeira palavra e = %d", strlen(nome));
    printf("\n\nO tamanho da segunda palavra e = %d\n\n", strlen(sobrenome));
    
    
    system("pause");    
    
}
