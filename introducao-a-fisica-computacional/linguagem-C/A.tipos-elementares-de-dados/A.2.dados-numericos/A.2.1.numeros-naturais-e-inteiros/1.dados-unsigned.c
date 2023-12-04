#include <stdio.h>

int main(void)
{
    //  Alocar dado do tipo 'unsigned' que pode armazenar natural
    unsigned num;                   // entre 0 e (+2^32 - 1)
    //  Requisitar um número natural ao usuário
    printf("Insira um número natural:");
    scanf(                          // efetua a leitura e armazena em &num
        "%u",                       // (%u especifica leitura de um unsigned)
        &num                        // (& = 'endereço na memória de')
    );
    //  Escrever o número natural informado
    printf("O número natural informado foi: %u\n", num);
    return 0;
}