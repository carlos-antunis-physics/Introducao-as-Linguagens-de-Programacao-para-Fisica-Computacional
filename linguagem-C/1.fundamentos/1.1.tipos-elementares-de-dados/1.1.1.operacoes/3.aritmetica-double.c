#include <stdio.h>
int main(void)
{
    double num_1, num_2;
    double resultado;
    //  Requisitar ao usuário dois operandos reais
    printf("Insira o primeiro operando real: ");
    scanf("%lf", &num_1);
    printf("Insira o segundo operando real: ");
    scanf("%lf", &num_2);
    //  Escrever os resultados das operações aritméticas
    resultado = num_1 + num_2;      // Computar a adição
    printf("%lf + %lf = %lf\n", num_1, num_2, resultado);
    resultado = num_1 - num_2;      // Computar a subtração
    printf("%lf - %lf = %lf\n", num_1, num_2, resultado);
    resultado = num_1 * num_2;      // Computar a multiplicação
    printf("%lf * %lf = %lf\n", num_1, num_2, resultado);
    resultado = num_1 / num_2;      // Computar a divisão
    printf("%lf / %lf = %lf\n", num_1, num_2, resultado);
    return 0;
}