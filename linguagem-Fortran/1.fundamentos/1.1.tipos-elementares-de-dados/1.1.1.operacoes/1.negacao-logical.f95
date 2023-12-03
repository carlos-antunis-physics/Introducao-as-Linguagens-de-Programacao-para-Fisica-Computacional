PROGRAM negacao_logical
    IMPLICIT NONE
    LOGICAL :: lgcl, nao_lgcl
    !   Requisitar que o usuário insira um booleano
    PRINT*, "Insira um valor booleano:"
    READ*, lgcl
    !   Escrever o booleano informado pelo usuário
    nao_lgcl = .NOT. lgcl           ! Computar a negação
    PRINT*, "A negação do booleano informado foi: ", nao_lgcl
END PROGRAM negacao_logical