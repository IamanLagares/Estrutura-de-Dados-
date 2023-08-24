#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[100];
    float preco;
    int quantidadeEstoque;
};

float calcularTotalCompra(struct Produto produtos[], int indicesComprados[], int numItens) {
    float total = 0.0;
    for (int i = 0; i < numItens; i++) {
        int index = indicesComprados[i];
        total += produtos[index].preco;
        produtos[index].quantidadeEstoque--;
    }
    return total;
}

int main() {
    struct Produto produtos[5];
    produtos[0] = (struct Produto){"Produto A", 10.0, 5};
    produtos[1] = (struct Produto){"Produto B", 20.0, 10};
    produtos[2] = (struct Produto){"Produto C", 15.0, 8};
    produtos[3] = (struct Produto){"Produto D", 25.0, 3};
    produtos[4] = (struct Produto){"Produto E", 30.0, 12};

    int opcao, indiceProduto, numItens = 0;
    int indicesComprados[5] = {0};

    while (1) {
        printf("\n---------------------------COMPRA DE PRODUTOS----------------------------");
        printf("\n1 - Comprar produto\n2 - Finalizar compra\n3 - Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nLista de produtos:\n");
                for (int i = 0; i < 5; i++) {
                    printf("%d - %s (R$ %.2f) - Estoque: %d\n", i + 1, produtos[i].nome, produtos[i].preco, produtos[i].quantidadeEstoque);
                }
                printf("Escolha o número do produto para comprar: ");
                scanf("%d", &indiceProduto);

                if (indiceProduto >= 1 && indiceProduto <= 5) {
                    int index = indiceProduto - 1;
                    if (produtos[index].quantidadeEstoque > 0) {
                        indicesComprados[numItens++] = index;
                        printf("Produto adicionado ao carrinho.\n");
                    } else {
                        printf("Produto fora de estoque.\n");
                    }
                } else {
                    printf("Opção inválida.\n");
                }
                break;
            case 2:
                if (numItens > 0) {
                    float totalCompra = calcularTotalCompra(produtos, indicesComprados, numItens);
                    printf("\nTotal da compra: R$ %.2f\n", totalCompra);
                    numItens = 0;
                } else {
                    printf("Carrinho vazio.\n");
                }
                break;
            case 3:
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}

