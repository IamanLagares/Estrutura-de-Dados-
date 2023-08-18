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
    printf("\nT�tulo: ");
    fflush(stdin);
    fgets(filme->titulo, 100, stdin);

    printf("Classifica��o: ");
    scanf("%d", &filme->classificacao);

    printf("Diretor: ");
    fflush(stdin);
    fgets(filme->diretor, 50, stdin);

    printf("G�nero: ");
    fflush(stdin);
    fgets(filme->genero, 50, stdin);

    printf("Dura��o: ");
    fflush(stdin);
    fgets(filme->duracao, 20, stdin);
}

int main() {
    setlocale(LC_ALL, "");

 
    struct Filme meuFilme;

    printf("---------- Cadastro de Filme ----------\n");
    preencherFilme(&meuFilme);

    // Sa�da de dados do Filme
    printf("\n---------- Informa��es do Filme ----------\n");
    printf("T�tulo: %s", meuFilme.titulo);
    printf("Classifica��o: %d\n", meuFilme.classificacao);
    printf("Diretor: %s", meuFilme.diretor);
    printf("G�nero: %s", meuFilme.genero);
    printf("Dura��o: %s", meuFilme.duracao);

    return 0;
}

