#include <stdio.h>

int main(void)
{
    //  Alocar dado do tipo 'float' que pode armazenar real com magnitude
    float num;                      // entre 1.2E-38 e 3.4E+38 e precisão de 6 casas
    //  Requisitar um número real ao usuário
    printf("Insira um número real:");
    scanf(                          // efetua a leitura e armazena em &num
        "%f",                       // (%f especifica leitura de um float)
        &num                        // (& = 'endereço na memória de')
    );
    //  Escrever o número real informado
    printf("O número real informado foi: %f\n", num);
    return 0;
}