/* Escreva um programa que não lê nada do teclado e escreve na tela a letra da cantiga Um elefante incomoda, como mostrado abaixo.
 * Preste muita atenção na pontuação (ponto final, ponto de exclamação, vírgula) e na concordância (singular, plural). */

#include <stdio.h>

int main() {

    printf("Um elefante incomoda muita gente.\n");

    for (int i = 2; i <= 10; i++) {

        switch (i) {
            case 2:
                printf("Dois ");
                break;
            case 3:
                printf("Três ");
                break;
            case 4:
                printf("Quatro ");
                break;
            case 5:
                printf("Cinco ");
                break;
            case 6:
                printf("Seis ");
                break;
            case 7:
                printf("Sete ");
                break;
            case 8:
                printf("Oito ");
                break;
            case 9:
                printf("Nove ");
                break;
            case 10:
                printf("Dez ");
                break;
        }
        if (i % 2 == 0 && i != 1) {
            int k = i;
            printf("s ");
            while (k > 0) {
                printf("incomodam");
                if (k != 1) {
                    printf(", ");
                } else {
                    printf(" ");
                }
                k--;
            }
            printf(" muito mais!\n");
        } else {
            printf("incomodam muita gente.\n");
        }
    }

    for (int j = 10; j > 1; j--) {

        switch (j) {
            case 2:
                printf("Dois ");
                break;
            case 3:
                printf("Três ");
                break;
            case 4:
                printf("Quatro ");
                break;
            case 5:
                printf("Cinco ");
                break;
            case 6:
                printf("Seis ");
                break;
            case 7:
                printf("Sete ");
                break;
            case 8:
                printf("Oito ");
                break;
            case 9:
                printf("Nove ");
                break;
            case 10:
                printf("Dez ");
                break;
        }
        printf("elefante ");

        if (j % 2 != 0 && j != 1) {
            int k = j;
            while (k > 0) {
                printf("incomodam");
                if (k != 1) {
                    printf(", ");
                } else {
                    printf(" ");
                }
                k--;
            }
            printf(" muito menos!\n");
        } else {
            printf("incomodam muita gente.\n");
        }
    }
  
    printf("Um elefante incomoda muito menos\n");

    return 0;
}
