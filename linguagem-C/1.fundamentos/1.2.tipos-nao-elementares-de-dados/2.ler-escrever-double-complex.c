#include <stdio.h>
#include <complex.h>                // Biblioteca de variáveis numéricas complexas
int main(void)
{
    double Re_num, Im_num;
    double _Complex num;            // Alocar memória para uma variável complexa
    //  Requisitar que o usuário insira um complexo
    printf("Insira o número complexo: ");
    scanf("(%lf,%lf)", &Re_num, &Im_num);
    num = Re_num + 1.0i * Im_num;   // Computar complexo
    printf(
        "O número complexo informado foi: (%lf, %lf)\n",
        creal(num),                 // Parte real do complexo
        cimag(num)                  // Parte imaginária do complexo
    );
    return 0;
}