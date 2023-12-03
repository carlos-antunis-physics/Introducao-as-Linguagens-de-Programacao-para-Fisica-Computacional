PROGRAM aritmetica_double_complex
    IMPLICIT NONE
    DOUBLE COMPLEX :: num_1, num_2
    DOUBLE COMPLEX :: resultado
    !   Requisitar que o usuário insira os complexos
    PRINT*, "Insira o primeiro operando complexo:"
    READ*, num_1
    PRINT*, "Insira o segundo operando complexo:"
    READ*, num_2
    !   Escrever o resultado das operações
    resultado = num_1 + num_2       ! Computar a adição
    PRINT*, num_1, "+", num_2, "=", resultado
    resultado = num_1 - num_2       ! Computar a subtração
    PRINT*, num_1, "-", num_2, "=", resultado
    resultado = num_1 * num_2       ! Computar a multiplicação
    PRINT*, num_1, "*", num_2, "=", resultado
    resultado = num_1 / num_2       ! Computar a divisão
    PRINT*, num_1, "/", num_2, "=", resultado
    resultado = num_1 ** num_2       ! Computar a exponenciação
    PRINT*, num_1, "^", num_2, "=", resultado
END PROGRAM aritmetica_double_complex