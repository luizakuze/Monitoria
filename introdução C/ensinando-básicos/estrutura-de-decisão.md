```c
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
```
```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}
```
```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número (1, 2, 3 ou 4): ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Um\n");
            break;
        case 2:
            printf("Dois\n");
            break;
        case 3:
            printf("Três\n");
            break;
        case 4:
            printf("Quatro\n");
            break;
        default:
            printf("Número fora do intervalo permitido\n");
    }

    return 0;
}
```
