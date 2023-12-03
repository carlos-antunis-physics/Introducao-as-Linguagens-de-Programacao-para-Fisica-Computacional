#include <stdio.h>
#include <complex.h>
int main(void)
{
    double Re, Im;
    double _Complex num_1, num_2;
    double _Complex resultado;
    //  Requisitar que o usuário insira os operandos
    printf("Insira o primeiro operando complexo: ");
    scanf("%lf %lf", &Re, &Im);
    num_1 = Re + 1.0i * Im;
    printf("Insira o segundo operando complexo: ");
    scanf("%lf %lf", &Re, &Im);
    num_2 = Re + 1.0i * Im;
    //  Escrever o valor resultado das operações
    resultado = num_1 + num_2;      // Computar a adição
    printf(
        "(%lf,%lf) + (%lf,%lf) = (%lf,%lf)\n",
        creal(num_1), cimag(num_1),
        creal(num_2), cimag(num_2),
        creal(resultado), cimag(resultado)
    );
    resultado = num_1 - num_2;      // Computar a subtração
    printf(
        "(%lf,%lf) - (%lf,%lf) = (%lf,%lf)\n",
        creal(num_1), cimag(num_1),
        creal(num_2), cimag(num_2),
        creal(resultado), cimag(resultado)
    );
    resultado = num_1 * num_2;      // Computar a multiplicação
    printf(
        "(%lf,%lf) * (%lf,%lf) = (%lf,%lf)\n",
        creal(num_1), cimag(num_1),
        creal(num_2), cimag(num_2),
        creal(resultado), cimag(resultado)
    );
    resultado = num_1 / num_2;      // Computar a divisão
    printf(
        "(%lf,%lf) / (%lf,%lf) = (%lf,%lf)\n",
        creal(num_1), cimag(num_1),
        creal(num_2), cimag(num_2),
        creal(resultado), cimag(resultado)
    );
    return 0;
}