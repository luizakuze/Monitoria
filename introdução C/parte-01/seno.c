#include <stdio.h>
#include <math.h>

float seno_bhaskara (float x){

    if (x > 180) {
        x = -(360 - x);
    }

    float sin = ( 4 * x * ( 180 - x)) / (40500 - x * (180 - x));

    return sin;
}

float seno_real (float x) {
    return sin(x);
}

int main() {
    float ang;
    printf("Entre com o valor do ângulo em graus: ");
    scanf("%f", &ang);

    printf("Valor aproximado do seno: %f\n", seno_bhaskara(ang));
    printf("Valor real do seno: %f\n", seno_real(ang));

    return 0;
}
