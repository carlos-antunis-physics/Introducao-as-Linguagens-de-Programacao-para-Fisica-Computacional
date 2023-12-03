#include <stdio.h>
int main(void)
{
    double num;                     // Alocar memória para uma variável real
    //  Requisitar que o usuário insira um número real
    printf("Insira um número real: ");
    scanf(                          // Ler o número real informado e armazenar
        "%lf",                      // (%lf especifica a presença de um double)
        &num                        // (& = endereço na memória de)
    );
    //  Escrever o número real informado pelo usuário
    printf("O número real informado foi: %lf\n", num);
    return 0;
}