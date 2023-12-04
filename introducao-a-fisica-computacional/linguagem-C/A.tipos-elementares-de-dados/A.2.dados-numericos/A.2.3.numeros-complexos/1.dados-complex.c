#include <stdio.h>
//  Incluir header do tipo complexo de dado
#include <complex.h>

int main(void)
{
    //  Alocar dado do tipo 'complex' que pode armazenar complexo
    complex num;                      // com partes real e complexa do tipo 'float'
    float Re, Im;
    //  Requisitar um número complexo ao usuário
    printf("Insira um número complexo:");
    scanf("%f %f", &Re, &Im);
    num = Re + 1.0i * Im;
    //  Escrever o número complexo informado
    printf(
        "O número complexo informado foi: (%f, %f)\n",
        creal(num),                 // parte real do número
        cimag(num)                  // parte imaginária do número
    );
    return 0;
}