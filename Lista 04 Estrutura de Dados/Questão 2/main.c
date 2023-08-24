#include <stdio.h>
#include <conio.h>


struct Tipo {
    int valor_inteiro;
    float valor_flutuante;
    char letra;
};

int main() {

    struct Tipo valor;

    printf("---------------------------STRUCT TIPO----------------------------");
    printf("\nInforme um valor inteiro: ");
    scanf("%d", &valor.valor_inteiro);

    printf("Informe um valor de ponto flutuante: ");
    scanf("%f", &valor.valor_flutuante);

    printf("Informe uma letra: ");
    fflush(stdin);
    scanf("%c", &valor.letra);

    printf("----------------------Imprimindo os valores da struct Tipo-------------------------------");
    printf("\nValor inteiro: %d", valor.valor_inteiro);
    printf("\nValor de ponto flutuante: %.2f", valor.valor_flutuante);
    printf("\nLetra: %c", valor.letra);

    getch();
    return 0;
}

