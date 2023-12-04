#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool _2_e_primo = true, _2_e_composto;
    //  Escrever o valor lógico da negacao da afirmação
    _2_e_composto = !_2_e_primo;    // '!' corresponde à negação
    printf("2 %s um número composto", (_2_e_composto)?"é":"não é");
    return 0; 
}