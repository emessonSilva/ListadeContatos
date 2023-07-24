// Bibliotecas usadas para rodar o programa corretamente.
#include "contato.h"
#include "cores.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// O programa inicia aqui
int main() {
  system("clear");                // Para limpar a tela no inicio.
  Contato contatos[MAX_CONTATOS]; // Criação do vetor para armazenar os conatos.
  int numContatos = 0,
      opcao; // Criação das variáveis numContatos para contar os contatos e
             // opcao para o usuário escolher no menu.

  // Loop das funções.
  do {
    menu();              // Chama a função menu.
    scanf("%d", &opcao); // Permite o usuário digitar uma opção.

    switch (opcao) {
    case 1: // Chama a função de cadastrar contato.
      numContatos += cadastrarContato(contatos, numContatos);
      break;
    case 2: // Chama a função de listar contatos.
      listarContatos(contatos, numContatos);
      break;
    case 3: // Chama a função de atualizar contato.
      atualizarContato(contatos, numContatos);
      break;
    case 4:
      excluirContato(contatos, numContatos);
      break;
    case 5: // Irá sair do loop, mostrar a mensagem abaixo e encerrar o
            // programa.
      printf(AMARELO "Saindo do programa...\n" RESET);
      break;
    default: // Caso a opção de escolha seja diferente do intervalo 1 - 5 a
             // mensagem abaixo irá ser mostrada.
      printf(VERMELHO "\nOpção inválida, tente novamente!\n" RESET);
      break;
    }
  } while (opcao != 5); // Condição de funcionamento do loop.

  return 0;
}
