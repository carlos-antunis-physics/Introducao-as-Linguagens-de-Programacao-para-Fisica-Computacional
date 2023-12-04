#include <stdio.h>

int main(void)
{
    /*
        Neste código efetuamos a alocação de dados do tipo
        'double', porém quaisquer tipos numéricos são
        operados de maneira equivalente
    */
    double num_1, num_2;
    //  Requisitar dois operandos ao usuário
    printf("Insira o primeiro operando real: ");
    scanf("%lf", &num_1);
    printf("Insira o segundo operando real: ");
    scanf("%lf", &num_2);
    //  Escrever os resultados da multiplicação
    printf(
        "%lf * %lf = %lf\n",
        num_1, num_2,
        num_1 * num_2               // '*' corresponde à multiplicação
    );
    return 0;
}