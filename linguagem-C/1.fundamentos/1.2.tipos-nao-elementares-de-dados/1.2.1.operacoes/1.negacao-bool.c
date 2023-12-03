#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned resposta;
    _Bool lgcl, nao_lgcl;
    //  Requisitar que o usuário insira um booleano
    printf("Sendo:\n[0] Falso\n[1] Verdadeiro\nInsira um valor booleano: ");
    scanf("%u", &resposta);
    lgcl = (_Bool)resposta;
    //  Escrever o valor lógico da negacao informado pelo usuário
    nao_lgcl = !lgcl;               // Computar a negação
    printf("O booleano informado foi: %s\n", (nao_lgcl)?"True":"False");
    return 0;
}