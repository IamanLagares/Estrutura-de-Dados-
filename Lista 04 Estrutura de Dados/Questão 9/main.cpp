#include <iostream>
#include <stdio.h>
#include <time.h>

struct Funcionario {
    char nome[100];
    char cargo[50];
    float salario;
    struct tm dataAdmissao;
};

void darAumento(struct Funcionario *funcionario, float percentual) {
    funcionario->salario *= (1.0 + percentual / 100.0);
    printf("Novo salário: R$ %.2f\n", funcionario->salario);
}

double calcularTempoNaEmpresa(struct Funcionario funcionario) {
    time_t now;
    time(&now);
    double diff = difftime(now, mktime(&(funcionario.dataAdmissao)));
    return diff / (60 * 60 * 24 * 365.25);
}

int main() {
    struct Funcionario funcionario;
    
    printf("Nome: ");
    fgets(funcionario.nome, 100, stdin);
    
    printf("Cargo: ");
    fgets(funcionario.cargo, 50, stdin);
    
    printf("Salário: ");
    scanf("%f", &funcionario.salario);
    
    printf("Data de admissão (formato: DD/MM/AAAA): ");
    scanf("%d/%d/%d", &funcionario.dataAdmissao.tm_mday, &funcionario.dataAdmissao.tm_mon, &funcionario.dataAdmissao.tm_year);
    funcionario.dataAdmissao.tm_mon--;

    int opcao;
    float percentual;

    while (1) {
        printf("\n1 - Aumentar salário\n2 - Tempo na empresa\n3 - Sair\nOpção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Percentual de aumento: ");
                scanf("%f", &percentual);
                darAumento(&funcionario, percentual);
                break;
            case 2:
                printf("Tempo na empresa: %.2f anos\n", calcularTempoNaEmpresa(funcionario));
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

