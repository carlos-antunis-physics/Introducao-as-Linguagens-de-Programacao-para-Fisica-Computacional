#include <stdio.h>
int main(void)
{
    unsigned num;                   // Alocar memória para uma variável natural
    //  Requisitar que o usuário insira um número natural
    printf("Insira um número natural: ");
    scanf(                          // Ler o número natural informado e armazenar
        "%u",                       // (%u especifica a presença de um unsigned)
        &num                        // (& = endereço na memória de)
    );
    //  Escrever o número natural informado pelo usuário
    printf("O número natural informado foi: %u\n", num);
    return 0;
}