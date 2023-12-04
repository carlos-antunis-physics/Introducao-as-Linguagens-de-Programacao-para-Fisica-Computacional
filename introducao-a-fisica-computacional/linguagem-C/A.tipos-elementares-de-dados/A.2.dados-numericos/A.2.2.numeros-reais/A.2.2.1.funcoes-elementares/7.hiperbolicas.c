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
    printf("sinh(%lf) = %lf", num, sinh(num));
    printf("cosh(%lf) = %lf", num, cosh(num));
    printf("tgh(%lf) = %lf", num, tanh(num));
    return 0;
}