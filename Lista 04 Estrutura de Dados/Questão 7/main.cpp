#include <stdio.h>
#include <string.h>

struct ContaBancaria {
    char nomeTitular[100];
    char numeroConta[20];
    float saldo;
};

void depositar(struct ContaBancaria *conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Dep�sito realizado com sucesso! Novo saldo: %.2f\n", conta->saldo);
    } else {
        printf("Valor inv�lido para dep�sito.\n");
    }
}

void sacar(struct ContaBancaria *conta, float valor) {
    if (valor > 0 && valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque realizado com sucesso! Novo saldo: %.2f\n", conta->saldo);
    } else {
        printf("Saldo insuficiente ou valor inv�lido para saque.\n");
    }
}

void verificarSaldo(struct ContaBancaria conta) {
    printf("Saldo atual: %.2f\n", conta.saldo);
}

int main() {
    struct ContaBancaria conta;

    printf("---------------------------OPERA��ES BANC�RIAS----------------------------");
    printf("\nInforme o nome do titular: ");
    fgets(conta.nomeTitular, 100, stdin);

    printf("Informe o n�mero da conta: ");
    fgets(conta.numeroConta, 20, stdin);

    conta.saldo = 0.0;

    int opcao;
    float valor;

    while (1) {
        printf("\n1 - Depositar\n2 - Sacar\n3 - Verificar Saldo\n4 - Sair\nEscolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para dep�sito: ");
                scanf("%f", &valor);
                depositar(&conta, valor);
                break;
            case 2:
                printf("Digite o valor para saque: ");
                scanf("%f", &valor);
                sacar(&conta, valor);
                break;
            case 3:
                verificarSaldo(conta);
                break;
            case 4:
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Op��o inv�lida.\n");
        }
    }

    return 0;
}

