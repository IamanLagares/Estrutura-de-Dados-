#include <stdio.h>
#include <string.h>
#include <locale.h> 


struct Filme {
    char titulo[100];
    int classificacao;
    char diretor[50];
    char genero[50];
    char duracao[20];
};


void preencherFilme(struct Filme *filme) {
    printf("\nTítulo: ");
    fflush(stdin);
    fgets(filme->titulo, 100, stdin);

    printf("Classificação: ");
    scanf("%d", &filme->classificacao);

    printf("Diretor: ");
    fflush(stdin);
    fgets(filme->diretor, 50, stdin);

    printf("Gênero: ");
    fflush(stdin);
    fgets(filme->genero, 50, stdin);

    printf("Duração: ");
    fflush(stdin);
    fgets(filme->duracao, 20, stdin);
}

int main() {
    setlocale(LC_ALL, "");

 
    struct Filme meuFilme;

    printf("---------- Cadastro de Filme ----------\n");
    preencherFilme(&meuFilme);

    // Saída de dados do Filme
    printf("\n---------- Informações do Filme ----------\n");
    printf("Título: %s", meuFilme.titulo);
    printf("Classificação: %d\n", meuFilme.classificacao);
    printf("Diretor: %s", meuFilme.diretor);
    printf("Gênero: %s", meuFilme.genero);
    printf("Duração: %s", meuFilme.duracao);

    return 0;
}

