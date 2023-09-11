/*
Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double angulo, distancia, altura;

    // Solicita ao usuário que insira o valor do ângulo em graus
    printf("Digite o valor do ângulo em graus (menor ou igual a 45): ");
    scanf("%lf", &angulo);

    if (angulo > 45) {
        printf("O ângulo deve ser menor ou igual a 45 graus.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Solicita ao usuário que insira o valor da distância
    printf("Digite a distância percorrida pelo avião: ");
    scanf("%lf", &distancia);

    // Converte o ângulo de graus para radianos para usar na função sin()
    angulo = angulo * M_PI / 180.0;

    // Calcula a altura usando a fórmula seno(ângulo) = altura/distância
    altura = sin(angulo) * distancia;

    // Exibe o resultado
    printf("A altura alcançada pelo avião é: %.2lf unidades de medida\n", altura);

    return 0;
}

