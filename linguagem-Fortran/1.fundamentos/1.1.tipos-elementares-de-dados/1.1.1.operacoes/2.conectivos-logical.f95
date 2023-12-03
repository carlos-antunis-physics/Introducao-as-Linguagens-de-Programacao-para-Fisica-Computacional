PROGRAM conectivos_logical
    IMPLICIT NONE
    LOGICAL :: lgcl_1, lgcl_2
    LOGICAL :: resultado
    !   Requisitar que o usuário insira os booleanos
    PRINT*, "Insira o primeiro operando booleano:"
    READ*, lgcl_1
    PRINT*, "Insira o segundo operando booleano:"
    READ*, lgcl_2
    !   Escrever o valor lógico das operações
    resultado = lgcl_1 .AND. lgcl_2  ! Computar a conjunção
    PRINT*, lgcl_1, "AND", lgcl_2, "<->", resultado
    resultado = lgcl_1 .OR. lgcl_2  ! Computar a disjunção
    PRINT*, lgcl_1, "OR", lgcl_2, "<->", resultado
END PROGRAM conectivos_logical