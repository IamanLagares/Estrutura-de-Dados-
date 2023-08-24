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
    printf("\nInforme a taxa de c�mbio (D�lares por Euro): ");
    scanf("%f", &taxaCambio);

    moeda.dolares = 0.0;
    moeda.euros = 0.0;

    int opcao;
    float valor;

    while (1) {
        printf("\n1 - Converter D�lares para Euros\n2 - Converter Euros para D�lares\n3 - Sair\nEscolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em D�lares: ");
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
                printf("Op��o inv�lida.\n");
        }

        printf("Saldo: %.2f D�lares | %.2f Euros\n", moeda.dolares, moeda.euros);
    }

    return 0;
}

