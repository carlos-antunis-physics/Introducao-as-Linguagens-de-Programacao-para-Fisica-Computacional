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
    printf("arcsin(%lf) = %lf", num, asin(num));
    printf("arccos(%lf) = %lf", num, acos(num));
    printf("arctg(%lf) = %lf", num, atan(num));
    return 0;
}