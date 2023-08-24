#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char conjuntoCaracteres[100];
    int tamanho;

    printf("---------------------------ORDENAÇÃO BUBBLE SORT----------------------------");
    printf("\nDigite um conjunto de caracteres: ");
    fgets(conjuntoCaracteres, sizeof(conjuntoCaracteres), stdin);

    tamanho = strlen(conjuntoCaracteres) - 1;
    
    bubbleSort(conjuntoCaracteres, tamanho);

    printf("\nConjunto de caracteres ordenado: %s\n", conjuntoCaracteres);

    return 0;
}

