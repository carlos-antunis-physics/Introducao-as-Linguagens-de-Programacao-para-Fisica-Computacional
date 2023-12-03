PROGRAM aritmetica_double_precision
    IMPLICIT NONE
    DOUBLE PRECISION :: num_1, num_2
    DOUBLE PRECISION :: resultado
    !   Requisitar que o usuário insira os reais
    PRINT*, "Insira o primeiro operando real:"
    READ*, num_1
    PRINT*, "Insira o segundo operando real:"
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
END PROGRAM aritmetica_double_precision