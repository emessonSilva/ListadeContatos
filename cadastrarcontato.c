// Bibliotecas usadas para rodar o programa corretamente
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contato.h"
#include "cores.h"

// Criação da função de cadastrar contato no programa
int cadastrarContato(Contato contatos[], int numContatos) {
//Caso o máximo de contato cadastrado seja atinjido, a mensagem será mostrada em vermelho   
  if (numContatos >= MAX_CONTATOS) {
        printf(VERMELHO "A lista de contatos está cheia!\n" RESET);
        return 0;
    }
//Criação de uma variável para armazenar os dados do novo contato
    Contato novoContato;
//Os dados que o usuário irá fornecer 
    printf("\nDigite o nome: ");
    getchar(); 
    fgets(novoContato.nome, MAX_NOME, stdin);
   
    printf("Digite o email: ");
    fgets(novoContato.email, MAX_EMAIL, stdin);
  
    printf("Digite o telefone: ");
    fgets(novoContato.telefone, MAX_TELEFONE, stdin);
   
//O novo contato está sendo adicionado ao vetor de contatos na posição indicada por numContatos.
    contatos[numContatos] = novoContato;
//Irá mostrar a mensagem com a cor verde.
    printf(VERDE "Contato cadastrado com sucesso!\n" RESET);
   return 1;
   
}
  