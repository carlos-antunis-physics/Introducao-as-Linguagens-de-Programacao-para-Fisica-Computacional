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
    printf("sin(%lf) = %lf", num, sin(num));
    printf("cos(%lf) = %lf", num, cos(num));
    printf("tg(%lf) = %lf", num, tan(num));
    return 0;
}