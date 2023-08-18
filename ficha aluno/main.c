#include <stdio.h>
#include <conio.h>

int main() {
    
    struct FichaDeAluno {
        char nome[50];
        char disciplina[30];
        char email[20];
        char matricula[20];
        char telefone[20];
        float nota_prova1;
        float nota_prova2;
    };
    
    struct FichaDeAluno aluno;

    // Entrada de dados
    printf("---------------------------CADASTRO DE ALUNO----------------------------");
    printf("\nNome de Aluno:");
    fflush(stdin);
    fgets(aluno.nome, 50, stdin); 

    printf("\nDisciplina:");
    fflush(stdin);
    fgets(aluno.disciplina, 30, stdin);

    printf("\nEmail:");
    fflush(stdin);
    fgets(aluno.email, 20, stdin);

    printf("\nMatrícula:");
    fflush(stdin);
    fgets(aluno.matricula, 20, stdin);

    printf("\nTelefone:");
    fflush(stdin);
    fgets(aluno.telefone, 20, stdin);

    printf("\nInforme a nota da Prova 1:");
    scanf("%f", &aluno.nota_prova1);

    printf("\nInforme a nota da Prova 2:");
    scanf("%f", &aluno.nota_prova2);

    // Saída de dados da Struct
    printf("----------------------Lendo os dados-------------------------------------");
    printf("\nNome: %s", aluno.nome);
    printf("Disciplina: %s", aluno.disciplina);
    printf("\nNota P1: %.2f", aluno.nota_prova1);
    printf("\nNota P2: %.2f", aluno.nota_prova2);
    printf("\nEmail: %s", aluno.email);
    printf("\nMatricula: %s", aluno.matricula);
    printf("\nTelefone: %s", aluno.telefone);

    getch();
    return(0);    
}

