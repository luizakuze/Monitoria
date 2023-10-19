```c
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
```
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    return 0;
}
```
```c
#include <stdio.h>

int main() {
    int contador = 1;

    do {
        printf("Contagem: %d\n", contador);
        contador++;
    } while (contador <= 5);

    return 0;
}
```
```c
#include <stdio.h>

int main() {
    int numero, soma = 0;

    do {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            soma += numero;
        }
    } while (numero != 0);

    printf("A soma dos números digitados é: %d\n", soma);

    return 0;
}
```

```c
// DESAFIO
#include <stdio.h>

int main() {
    int N;
    int soma = 0;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) { // Verifica se o número é ímpar
            soma += i;
        }
    }

    printf("A soma dos números ímpares de 1 a %d é: %d\n", N, soma);

    return 0;
}
```
