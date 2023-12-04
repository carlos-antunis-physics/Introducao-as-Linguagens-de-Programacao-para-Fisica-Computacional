#include <stdio.h>

int main(void)
{
    //  Alocar dado do tipo 'double' que pode armazenar real com magnitude
    double num;                      // entre 2.3E-308 e 1.7E+308 e precisão de 15 casas
    //  Requisitar um número real ao usuário
    printf("Insira um número real:");
    scanf(                          // efetua a leitura e armazena em &num
        "%lf",                      // (%lf especifica leitura de um double)
        &num                        // (& = 'endereço na memória de')
    );
    //  Escrever o número real informado
    printf("O número real informado foi: %lf\n", num);
    return 0;
}