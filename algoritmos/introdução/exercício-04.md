# Exercício 04 - parte 01
  
## Introdução  
Nos Estados Unidos da América, a altura de uma pessoa é medida em pés + polegadas. Por exemplo, considere uma pessoa com 5 pés + 11 polegadas de altura (escrito simplesmente como 5'11"); sabendo que 1 pé equivale a 12 polegadas, e 1 polegada equivale a 2.54 centímetros, conclui-se que tal pessoa tem por volta de 180.34 centímetros de altura.

**(a)** Escreva um pseudocódigo para um algoritmo que lê dois números inteiros representando os valores da altura de uma pessoa em pés + polegadas, e escreve o valor da altura em centímetros. Em seguida, execute um teste de mesa com
a entrada 5, 11; a saída deve ser 180.34.

**(b)** Repita o item anterior, mas agora supondo que é lido um único valor em centímetros e são escritos os valores em pés e polegadas correspondentes. Assuma que exista uma função chamada round que arredonda um número real para 1/6 o inteiro mais próximo; por exemplo, round(3.14) = 3 e round(3.86) = 4. Em seguida, execute um teste de mesa com a entrada 180; a saída deve ser 5, 11.


## Resolução

### A)

#### Pseudocódigo

<div align="center">

![](../../imagens/ex-04.png)

</div>

#### Teste de mesa
(entrada =  5, 11) <br>
(saída =  180.34)

|Inst|pés|polegadas|centímetros|
----|----|----|----
|0|?|?|?|
|1|?|?|?|
|2|?|?|?|
|3|5|?|?|
|4|5|11|?|
|5|5|71|?|
|6|5|71|180.34|
|7|5|71|180.34|
|8|5|71|180.34|


### B)

#### Pseudocódigo

<div align="center">

![](../../imagens/ex-04.2.png)

</div>

#### Teste de mesa

(entrada = 180) <br>
(saída = 5, 11)

|Inst|pés|polegadas|centímetros|
----|----|----|----
|0|?|?|?|
|1|?|?|?|
|2|?|?|?|
|3|?|?|?|
|4|?|?|180|
|5|?|70.866|180|
|6|5|70.866|180|
|7|5|10.866|180|
|8|5|10.866|180| 
|9|5|11|180|
|9|5|11|180|

nao precisa round! como pes já é inteiro 😶

### Extra para letra B

Um código em C para auxiliar no teste de mesa 🤗

Vale resaltar que fiz a variável "pes" como um número inteiro e a polegadas como um número  real, pois vamos tentar converter o máximo de  "pés" inteiros e o que sobrar fica como polegada.

```c
#include <stdio.h>
#include <math.h>

int main() {
    float centimetros;
    printf("Digite a altura em centímetros: ");
    scanf("%f", &centimetros);

    float polegadas = centimetros / 2.54;
    int pes = polegadas / 12;
    polegadas = polegadas - pes*12;

    printf("Altura: %f' %f\n", round(pes), round(polegadas));

    return 0;
}
```