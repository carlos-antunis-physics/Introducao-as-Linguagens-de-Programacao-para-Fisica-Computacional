#include <stdio.h>
//  Incluir header das funções complexas elementares
#include <complex.h>

int main(void)
{
    double Re, Im;
    double complex base, expoente;
    double complex resultado;
    //  Requisitar os operando ao usuário
    printf("Insira o primeiro operando real (base): ");
    scanf("%lf %lf", &Re, &Im);
    base = Re + 1.0i * Im;
    printf("Insira o segundo operando real (expoente): ");
    scanf("%lf %lf", &Re, &Im);
    base = Re + 1.0i * Im;
    //  Escrever o resultado da função
    resultado = cpow(base, expoente);
    printf(
        "(%lf, %lf) ^ (%lf, %lf) = (%lf, %lf)",
        creal(base), cimag(base),
        creal(expoente), cimag(expoente),
        creal(resultado), cimag(resultado)
    );
    return 0;
}