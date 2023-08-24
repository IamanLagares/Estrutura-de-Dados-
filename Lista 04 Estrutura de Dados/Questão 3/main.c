#include <stdio.h>
#include <conio.h>
#include <math.h>


struct Ponto {
    float x;
    float y;
};

float calcularDistancia(struct Ponto p1, struct Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

float calcularInclinacao(struct Ponto p1, struct Ponto p2) {
    return (p2.y - p1.y) / (p2.x - p1.x);
}

int main() {
    struct Ponto ponto1, ponto2;

    printf("---------------------------CÁLCULOS COM PONTOS----------------------------");
    printf("\nInforme as coordenadas do Ponto 1:\n");
    printf("Coordenada x: ");
    scanf("%f", &ponto1.x);
    printf("Coordenada y: ");
    scanf("%f", &ponto1.y);

    printf("\nInforme as coordenadas do Ponto 2:\n");
    printf("Coordenada x: ");
    scanf("%f", &ponto2.x);
    printf("Coordenada y: ");
    scanf("%f", &ponto2.y);

    printf("----------------------Resultados-------------------------------------");
    printf("\nDistância entre os pontos: %.2f", calcularDistancia(ponto1, ponto2));
    
    if (ponto2.x - ponto1.x != 0) {
        printf("\nInclinação da reta: %.2f", calcularInclinacao(ponto1, ponto2));
    } else {
        printf("\nA inclinação é infinita (reta vertical).");
    }

    getch();
    return 0;
}

