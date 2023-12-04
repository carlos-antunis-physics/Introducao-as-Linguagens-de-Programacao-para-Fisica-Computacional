#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool _3_e_pos = true, _2_e_pos = true, _6_e_pos;
    //  Escrever o valor lógico da disjunção das afirmacões
    _6_e_pos = _3_e_pos || _2_e_pos;// '||' corresponde à disjunção
    printf("6 %s um número positivo", (_6_e_pos)?"é":"não é");
    return 0;
}