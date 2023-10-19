#include <stdio.h>

int main() {
    int nota;

    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    if (nota >= 90) {
        printf("Aprovado com A\n");
    } else if (nota >= 80) {
        printf("Aprovado com B\n");
    } else if (nota >= 70) {
        printf("Aprovado com C\n");
    } else if (nota >= 60) {
        printf("Aprovado com D\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
