PROGRAM ler_escrever_logical
    IMPLICIT NONE
    LOGICAL :: lgcl                 ! Alocar memória para uma variável booleana
    !   Requisitar que o usuário insira um booleano
    PRINT*, "Insira um valor booleano:"
    READ*, lgcl                     ! LOGICAL equivale a T ou F
    !   Escrever o booleano informado pelo usuário
    PRINT*, "O booleano informado foi: ", lgcl
END PROGRAM ler_escrever_logical