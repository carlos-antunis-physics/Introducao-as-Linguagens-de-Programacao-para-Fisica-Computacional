PROGRAM ler_escrever_double_precision
    IMPLICIT NONE
    DOUBLE PRECISION :: num         ! Alocar memória para uma variável real
    !   Requisitar que o usuário insira um número real
    PRINT*, "Insira um número real:"
    READ*, num
    !   Escrever o número real informado pelo usuário
    PRINT*, "O número real informado foi: ", num
END PROGRAM ler_escrever_double_precision