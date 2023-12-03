#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned resposta;
    _Bool lgcl_1, lgcl_2;
    _Bool resultado;
    //  Requisitar que o usuário insira os operandos
    printf("Sendo:\n[0] Falso\n[1] Verdadeiro\n");
    printf("Insira o primeiro operando booleano: ");
    scanf("%u", &resposta);
    lgcl_1 = (_Bool)resposta;
    printf("Insira o segundo operando booleano: ");
    scanf("%u", &resposta);
    lgcl_2 = (_Bool)resposta;
    //  Escrever o valor lógico das operações
    resultado = lgcl_1 && lgcl_2;   // Computar a conjunção
    printf(
        "%s AND %s <-> %s\n",
        (lgcl_1)?"True":"False",
        (lgcl_2)?"True":"False",
        (resultado)?"True":"False"
    );
    resultado = lgcl_1 || lgcl_2;   // Computar a disjunção
    printf(
        "%s OR %s <-> %s\n",
        (lgcl_1)?"True":"False",
        (lgcl_2)?"True":"False",
        (resultado)?"True":"False"
    );
    return 0;
}