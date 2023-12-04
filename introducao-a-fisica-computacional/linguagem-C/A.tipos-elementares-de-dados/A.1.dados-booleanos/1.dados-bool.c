#include <stdio.h>
//  Incluir header do tipo booleano de dado
#include <stdbool.h>

int main(void)
{
    //  Alocar dado do tipo 'bool' que pode armazenar
    bool _2_e_primo = true;         // false (= 0) ou true (= 1)
    printf(
        "2 %s um número primo",      // (%s especifica a presença de mensagem)
        (_2_e_primo) ? "é" : "não é" // (X)?A:B retorna A se X é 0 e B caso contrário
    );
    return 0; 
}