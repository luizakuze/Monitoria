#include <stdio.h>

#define NUM_ELEMENTOS 10

int main() {
    int vet[NUM_ELEMENTOS];
    int soma_num = 0;

    // Leitura dos números inteiros para o vetor
    for (int i = 0; i < NUM_ELEMENTOS; i++) {
        printf("vet[%d] = ", i);
        scanf("%d", &vet[i]);
        soma_num += vet[i];
    }

    // Cálculo da média
    float media = (float)soma_num / NUM_ELEMENTOS;
    int acima_media = 0;

    // Contagem de números acima da média
    for (int i = 0; i < NUM_ELEMENTOS; i++) {
        if (vet[i] > media) {
            acima_media++;
        }
    }

    // Impressão do resultado
    printf("Existem %d números acima da média.\n", acima_media);

    return 0;
}
