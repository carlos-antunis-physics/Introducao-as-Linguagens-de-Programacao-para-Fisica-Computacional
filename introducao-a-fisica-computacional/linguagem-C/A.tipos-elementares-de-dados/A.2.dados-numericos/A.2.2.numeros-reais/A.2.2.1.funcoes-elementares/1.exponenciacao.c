#include <stdio.h>
//  Incluir header das funções reais elementares
#include <math.h>

int main(void)
{
    double base, expoente;
    //  Requisitar os operando ao usuário
    printf("Insira o primeiro operando real (base): ");
    scanf("%lf", &base);
    printf("Insira o segundo operando real (expoente): ");
    scanf("%lf", &expoente);
    //  Escrever o resultado da função
    printf(
        "%lf ^ %lf = %lf",
        base, expoente,
        pow(base, expoente)
    );
    return 0;
}