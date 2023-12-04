#include <stdio.h>
//  Incluir header das funções reais elementares
#include <math.h>

int main(void)
{
    double num;
    //  Requisitar os operando ao usuário
    printf("Insira o operando real: ");
    scanf("%lf", &num);
    //  Escrever os resultados das funções
    printf("argsinh(%lf) = %lf", num, argsinh(num));
    printf("argcosh(%lf) = %lf", num, argcosh(num));
    printf("argtgh(%lf) = %lf", num, argtanh(num));
    return 0;
}