#include <stdio.h>
#include <stdbool.h>                // Biblioteca de variáveis booleanas
int main(void)
{
    unsigned resposta;
    _Bool lgcl;                      // Alocar memória para uma variável booleana
    //  Requisitar que o usuário insira um booleano
    printf("Sendo:\n[0] Falso\n[1] Verdadeiro\nInsira um valor booleano: ");
    scanf(                          // Ler o valor informado e armazenar
        "%u",                       // (%d especifica a presença de um int)
        &resposta                   // (& = endereço na memória de)
    );
    lgcl = (_Bool)resposta;          //  bool equivale a int com 0=False e 1=True
    //  Escrever o valor lógico informado pelo usuário
    printf(
        "O booleano informado foi: %s\n",
                                    // (%s especifica a presença de uma mensagem)
        (lgcl)?"True":"False"       // ((X)?A:B retorna A se X é 0 e B caso contrário)
    );
    return 0;
}