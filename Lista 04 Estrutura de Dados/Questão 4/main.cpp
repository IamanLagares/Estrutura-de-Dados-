#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[50];
    char telefone[20];
};

void adicionarContato(struct Contato contatos[], int *numContatos) {
    if (*numContatos < 100) {
        printf("Digite o nome do contato: ");
        scanf("%s", contatos[*numContatos].nome);
        printf("Digite o número de telefone do contato: ");
        scanf("%s", contatos[*numContatos].telefone);
        (*numContatos)++;
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("A lista de contatos está cheia.\n");
    }
}

void listarContatos(struct Contato contatos[], int numContatos) {
    printf("Lista de contatos:\n");
    for (int i = 0; i < numContatos; i++) {
        printf("Nome: %s, Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
    }
}

void buscarContato(struct Contato contatos[], int numContatos, char nomeBusca[]) {
    int encontrado = 0;
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(contatos[i].nome, nomeBusca) == 0) {
            printf("Contato encontrado:\nNome: %s, Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

int main() {
    struct Contato contatos[100];
    int numContatos = 0, opcao;
    char nomeBusca[50];

    while (1) {
        printf("\n1 - Adicionar contato\n2 - Listar contatos\n3 - Buscar contato por nome\n4 - Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: adicionarContato(contatos, &numContatos); break;
            case 2: listarContatos(contatos, numContatos); break;
            case 3:
                printf("Digite o nome do contato a ser buscado: ");
                scanf("%s", nomeBusca);
                buscarContato(contatos, numContatos, nomeBusca);
                break;
            case 4: printf("Saindo do programa.\n"); return 0;
            default: printf("Opção inválida.\n");
        }
    }

    return 0;
}

