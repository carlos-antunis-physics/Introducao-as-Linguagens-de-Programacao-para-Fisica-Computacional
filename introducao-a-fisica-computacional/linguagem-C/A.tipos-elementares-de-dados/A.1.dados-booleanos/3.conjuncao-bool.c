#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool _3_e_int = true, _2_e_int = true, _5_e_int;
    //  Escrever o valor lógico da conjunção das afirmacões
    _5_e_int = _3_e_int && _2_e_int;// '&&' corresponde à conjunção
    printf("5 %s um número inteiro", (_5_e_int)?"é":"não é");
    return 0;
}