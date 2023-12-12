#include "processamento.h"

//A seguinte função ler os dado do arquivo e armazena na estrutura Usuários
void separa_usu(FILE *arquivo, struct Usuario *usuario) {
    //sizeof é o responsavel por saber o tamanho se caracteres

    //Faço a leitura do login
    fgets(usuario->login, sizeof(usuario->login), arquivo);
    //Pula uma posição
    fgetc(arquivo);

    //Faço a leitura da senha
    fgets(usuario->senha, sizeof(usuario->senha), arquivo);
    fgetc(arquivo);

    //Faço a leitura do nome
    fgets(usuario->nome, sizeof(usuario->nome), arquivo);
    fgetc(arquivo);

    //Ao debugar foi notado que fgets voltava uma posição para trás
    //coloquei um fgetc logo após, para resolver isto, pois ele avança uma posição
}
