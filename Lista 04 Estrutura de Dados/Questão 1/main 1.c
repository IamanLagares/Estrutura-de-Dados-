#include <stdio.h>
#include <conio.h>


struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    
    struct Pessoa pessoa;

    printf("---------------------------CADASTRO DE PESSOA----------------------");
    printf("\nNome: ");
    fflush(stdin);
    fgets(pessoa.nome, 50, stdin);

    printf("Idade: ");
    scanf("%d", &pessoa.idade);

    printf("Altura: ");
    scanf("%f", &pessoa.altura);

    printf("----------------------Dados da pessoa------------------------------");
    printf("\nNome: %s", pessoa.nome);
    printf("Idade: %d", pessoa.idade);
    printf("\nAltura: %.2f", pessoa.altura);

    getch();
    return 0;
}

