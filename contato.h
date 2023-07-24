//Esta primeira linha verifica se a constante CONTATO_H ainda não foi definida. Se não estiver definida, o bloco de código seguinte será executado. Caso contrário, o bloco de código será ignorado. Isso evita a redefinição do arquivo de cabeçalho.
#ifndef CONTATO_H 
//Esta linha define a constante CONTATO_H. Essa definição é usada para garantir que o bloco de código do arquivo de cabeçalho só seja incluído uma vez no programa.
#define CONTATO_H 
//Define os tamanhos dos dados
#define MAX_NOME 50 
#define MAX_EMAIL 50
#define MAX_TELEFONE 15
#define MAX_CONTATOS 10
// Criação de uma estrutura com três membros
typedef struct {
    char nome[MAX_NOME];
    char email[MAX_EMAIL];
    char telefone[MAX_TELEFONE];
    int excluido;
} Contato; //Nome da estrutura

//Protótipo das funções do programa
void menu();
int cadastrarContato(Contato contatos[], int numContatos);
void listarContatos(Contato contatos[], int numContatos);
void atualizarContato(Contato contatos[], int numContatos);
void excluirContato(Contato contatos[], int numContatos);
#endif