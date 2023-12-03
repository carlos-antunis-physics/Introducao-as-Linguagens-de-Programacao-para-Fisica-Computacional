#include <stdio.h>
int main(void)
{
    int num;                        // Alocar memória para uma variável inteiro
    //  Requisitar que o usuário insira um número inteiro
    printf("Insira um número inteiro: ");
    scanf(                          // Ler o número inteiro informado e armazenar
        "%d",                       // (%d especifica a presença de um int)
        &num                        // (& = endereço na memória de)
    );
    //  Escrever o número inteiro informado pelo usuário
    printf("O número inteiro informado foi: %d\n", num);
    return 0;
}