#include <stdio.h>
#include <string.h>

struct Estudante {
    char nome[100];
    char matricula[20];
    float nota_disciplina1;
    float nota_disciplina2;
    float nota_disciplina3;
};

float calcularMedia(struct Estudante estudante) {
    return (estudante.nota_disciplina1 + estudante.nota_disciplina2 + estudante.nota_disciplina3) / 3.0;
}

int estaAprovado(struct Estudante estudante) {
    float media = calcularMedia(estudante);
    return media >= 7.0;
}

int main() {
    struct Estudante estudante;

    printf("---------------------------CÁLCULOS COM ESTUDANTES----------------------------");
    printf("\nInforme o nome do estudante: ");
    fgets(estudante.nome, 100, stdin);

    printf("Informe a matrícula do estudante: ");
    fgets(estudante.matricula, 20, stdin);

    printf("Informe a nota da Disciplina 1: ");
    scanf("%f", &estudante.nota_disciplina1);

    printf("Informe a nota da Disciplina 2: ");
    scanf("%f", &estudante.nota_disciplina2);

    printf("Informe a nota da Disciplina 3: ");
    scanf("%f", &estudante.nota_disciplina3);

    printf("----------------------Resultados-------------------------------------");
    printf("\nNome: %s", estudante.nome);
    printf("Matrícula: %s", estudante.matricula);
    printf("Média das notas: %.2f\n", calcularMedia(estudante));
    
    if (estaAprovado(estudante)) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    getchar(); 
    return 0;
}

