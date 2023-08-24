#include <stdio.h>

struct Moeda {
    float dolares;
    float euros;
};

float converterDolaresParaEuros(float valorDolares, float taxa) {
    return valorDolares * taxa;
}

float converterEurosParaDolares(float valorEuros, float taxa) {
    return valorEuros / taxa;
}

int main() {
    struct Moeda moeda;
    float taxaCambio;

    printf("---------------------------CONVERSOR DE MOEDAS----------------------------");
    printf("\nInforme a taxa de câmbio (Dólares por Euro): ");
    scanf("%f", &taxaCambio);

    moeda.dolares = 0.0;
    moeda.euros = 0.0;

    int opcao;
    float valor;

    while (1) {
        printf("\n1 - Converter Dólares para Euros\n2 - Converter Euros para Dólares\n3 - Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em Dólares: ");
                scanf("%f", &valor);
                moeda.dolares -= valor;
                moeda.euros += converterDolaresParaEuros(valor, taxaCambio);
                break;
            case 2:
                printf("Digite o valor em Euros: ");
                scanf("%f", &valor);
                moeda.euros -= valor;
                moeda.dolares += converterEurosParaDolares(valor, taxaCambio);
                break;
            case 3:
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida.\n");
        }

        printf("Saldo: %.2f Dólares | %.2f Euros\n", moeda.dolares, moeda.euros);
    }

    return 0;
}

