PROGRAM ler_escrever_double_complex
    IMPLICIT NONE
    DOUBLE COMPLEX :: num           ! Alocar memória para uma variável complexo
    !   Requisitar que o usuário insira um número complexo
    PRINT*, "Insira um número complexo:"
    READ*, num
    !   Escrever o número complexo informado pelo usuário
    PRINT*, "O número complexo informado foi: ", num
END PROGRAM ler_escrever_double_complex