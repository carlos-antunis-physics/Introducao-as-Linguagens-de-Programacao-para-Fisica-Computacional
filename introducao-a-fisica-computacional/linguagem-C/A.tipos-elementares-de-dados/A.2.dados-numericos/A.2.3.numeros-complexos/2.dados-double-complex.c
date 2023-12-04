#include <stdio.h>
//  Incluir header do tipo complexo de dado
#include <complex.h>

int main(void)
{
    //  Alocar dado do tipo 'double complex' que pode armazenar complexo
    double complex num;             // com partes real e complexa do tipo 'double'
    double Re, Im;
    //  Requisitar um número complexo ao usuário
    printf("Insira um número complexo:");
    scanf("%lf %lf", &Re, &Im);
    num = Re + 1.0i * Im;
    //  Escrever o número complexo informado
    printf(
        "O número complexo informado foi: (%lf, %lf)\n",
        creal(num),                 // parte real do número
        cimag(num)                  // parte imaginária do número
    );
    return 0;
}