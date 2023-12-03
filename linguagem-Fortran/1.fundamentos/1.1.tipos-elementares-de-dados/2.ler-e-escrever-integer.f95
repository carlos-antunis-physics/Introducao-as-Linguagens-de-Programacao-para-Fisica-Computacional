PROGRAM ler_escrever_integer
    IMPLICIT NONE
    INTEGER :: num                  ! Alocar memória para uma variável inteiro
    !   Requisitar que o usuário insira um número inteiro
    PRINT*, "Insira um número inteiro:"
    READ*, num
    !   Escrever o número inteiro informado pelo usuário
    PRINT*, "O número inteiro informado foi: ", num
END PROGRAM ler_escrever_integer