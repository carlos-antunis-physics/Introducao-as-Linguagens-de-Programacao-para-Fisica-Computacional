#include <stdio.h>
int main(void)
{
    unsigned num_1, num_2;
    unsigned resultado;
    //  Requisitar ao usuário dois operandos naturais
    printf("Insira o primeiro operando natural: ");
    scanf("%u", &num_1);
    printf("Insira o segundo operando natural: ");
    scanf("%u", &num_2);
    //  Escrever os resultados das operações aritméticas
    resultado = num_1 + num_2;      // Computar a adição
    printf("%u + %u = %u\n", num_1, num_2, resultado);
    resultado = num_1 - num_2;      // Computar a subtração
    printf("%u - %u = %u\n", num_1, num_2, resultado);
    resultado = num_1 * num_2;      // Computar a multiplicação
    printf("%u * %u = %u\n", num_1, num_2, resultado);
    resultado = num_1 / num_2;      // Computar a divisão
    printf("%u / %u = %u\n", num_1, num_2, resultado);
    return 0;
}