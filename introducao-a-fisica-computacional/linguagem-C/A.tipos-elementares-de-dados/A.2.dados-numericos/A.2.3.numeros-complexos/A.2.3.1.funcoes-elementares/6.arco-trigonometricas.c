#include <stdio.h>
//  Incluir header das funções complexas elementares
#include <complex.h>

int main(void)
{
    double Re, Im;
    double complex num;
    double complex resultado;
    //  Requisitar os operando ao usuário
    printf("Insira o operando complexo: ");
    scanf("%lf %lf", &Re, &Im);
    num = Re + 1.0i * Im;
    //  Escrever o resultado da função
    resultado = casin(num);
    printf(
        "arcsin(%lf, %lf) = (%lf, %lf)",
        creal(num), cimag(num),
        creal(resultado), cimag(resultado)
    );
    resultado = cacos(num);
    printf(
        "arccos(%lf, %lf) = (%lf, %lf)",
        creal(num), cimag(num),
        creal(resultado), cimag(resultado)
    );
    resultado = catan(num);
    printf(
        "arctg(%lf, %lf) = (%lf, %lf)",
        creal(num), cimag(num),
        creal(resultado), cimag(resultado)
    );
    return 0;
}