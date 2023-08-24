#include <stdio.h>
#include <string.h>

// Definição da struct Livro
struct Livro {
    char titulo[100];
    char autor[50];
    int anoPublicacao;
};

void adicionarLivro(struct Livro livros[], int *numLivros) {
    if (*numLivros < 100) {
        printf("Digite o título do livro: ");
        fflush(stdin);
        fgets(livros[*numLivros].titulo, 100, stdin);

        printf("Digite o nome do autor: ");
        fflush(stdin);
        fgets(livros[*numLivros].autor, 50, stdin);

        printf("Digite o ano de publicação: ");
        scanf("%d", &livros[*numLivros].anoPublicacao);

        (*numLivros)++;
        printf("Livro adicionado com sucesso!\n");
    } else {
        printf("A lista de livros está cheia.\n");
    }
}

void listarLivros(struct Livro livros[], int numLivros) {
    printf("\nLista de livros:\n");
    for (int i = 0; i < numLivros; i++) {
        printf("Título: %sAutor: %sAno de Publicação: %d\n", livros[i].titulo, livros[i].autor, livros[i].anoPublicacao);
    }
}

void buscarLivroPorAutor(struct Livro livros[], int numLivros, char autorBusca[]) {
    int encontrado = 0;
    printf("\nLivros do autor '%s':\n", autorBusca);
    for (int i = 0; i < numLivros; i++) {
        if (strstr(livros[i].autor, autorBusca) != NULL) {
            printf("Título: %sAno de Publicação: %d\n", livros[i].titulo, livros[i].anoPublicacao);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Nenhum livro do autor '%s' encontrado.\n", autorBusca);
    }
}

int main() {
    struct Livro livros[100];
    int numLivros = 0, opcao;
    char autorBusca[50];

    while (1) {
        printf("\n1 - Adicionar livro\n2 - Listar livros\n3 - Buscar livros por autor\n4 - Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: adicionarLivro(livros, &numLivros); break;
            case 2: listarLivros(livros, numLivros); break;
            case 3:
                printf("Digite o nome do autor para buscar: ");
                fflush(stdin);
                fgets(autorBusca, 50, stdin);
                buscarLivroPorAutor(livros, numLivros, autorBusca);
                break;
            case 4: printf("Saindo do programa.\n"); return 0;
            default: printf("Opção inválida.\n");
        }
    }

    return 0;
}

