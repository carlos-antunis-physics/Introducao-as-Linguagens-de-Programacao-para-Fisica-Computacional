#include <stdio.h>
int main(void)
{
    int num_1, num_2;
    int resultado;
    //  Requisitar ao usuário dois operandos inteiros
    printf("Insira o primeiro operando inteiro: ");
    scanf("%d", &num_1);
    printf("Insira o segundo operando inteiro: ");
    scanf("%d", &num_2);
    //  Escrever os resultados das operações aritméticas
    resultado = num_1 + num_2;      // Computar a adição
    printf("%d + %d = %d\n", num_1, num_2, resultado);
    resultado = num_1 - num_2;      // Computar a subtração
    printf("%d - %d = %d\n", num_1, num_2, resultado);
    resultado = num_1 * num_2;      // Computar a multiplicação
    printf("%d * %d = %d\n", num_1, num_2, resultado);
    resultado = num_1 / num_2;      // Computar a divisão
    printf("%d / %d = %d\n", num_1, num_2, resultado);
    return 0;
}