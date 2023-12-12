#include "processamento.h"

int main(int argc, char **argv) {
    FILE *arquivo;
    // Cria a raiz da árvore
    no_t *raiz = NULL;
    struct Usuario novoUsuario;

    char arq[] = "../usuarios.dat";
    arquivo = fopen(arq, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê o arquivo e insere os valores na árvore
    while (!feof(arquivo)) {
        separa_usu(arquivo, &novoUsuario);
        raiz = inserir_valor(raiz, novoUsuario);
    }

    // Fechar o arquivo
    fclose(arquivo);

    // Recebe o login do usuário
    char login[10];
    char senha[10];

    while (login[0] != 's' || login[0] != 'S'){

        printf("Qual o login?\n");
        scanf("%s", login);
        if (login[0] == 's' || login[0] == 'S') break;

        printf("Qual a senha?\n");
        scanf("%s", senha);

        // Busca o usuário na árvore
        busca_usuario(raiz, login, senha);
    }

    // Imprimi o usuário de maior valor da árvore
    imprimir_maior_usuario(raiz);

    // Imprimi o usuário de menor valor da árvore
    imprimir_menor_usuario(raiz);

    // Destruit a arvore
    destruir_no_arvore(raiz);
    return 0;
}
