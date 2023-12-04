#include <stdio.h>
//  Incluir header das funções reais elementares
#include <math.h>

int main(void)
{
    double num;
    //  Requisitar os operando ao usuário
    printf("Insira o operando real: ");
    scanf("%lf", &num);
    //  Escrever o resultado da função
    printf("abs(%lf) = %lf",num, fabs(num));
    return 0;
}