#include <stdio.h>

int main(void)
{
    //  Alocar dado do tipo 'int' que pode armazenar inteiro
    int num;                        // entre -2^31 e (+2^31 - 1)
    //  Requisitar um número inteiro ao usuário
    printf("Insira um número inteiro:");
    scanf(                          // efetua a leitura e armazena em &num
        "%i",                       // (%i especifica leitura de um int)
        &num                        // (& = 'endereço na memória de')
    );
    //  Escrever o número inteiro informado
    printf("O número inteiro informado foi: %i\n", num);
    return 0;
}