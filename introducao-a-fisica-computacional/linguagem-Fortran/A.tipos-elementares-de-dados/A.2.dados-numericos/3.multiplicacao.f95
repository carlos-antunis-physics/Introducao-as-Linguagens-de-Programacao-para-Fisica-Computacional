program multiplicacao
    implicit none
    !   Neste código efetuamos a alocação de dados do tipo
    !   'double precision', porém quaisquer tipos numéricos
    !   são operados de maneira equivalente
    double precision :: num_1, num_2
    !   Requisitar dois operandos ao usuário
    print*, "Insira o primeiro operando real:"
    read*, num_1
    print*, "Insira o segundo operando real:"
    read*, num_2
    !   Escrever os resultados da multiplicação
    print*,&
        num_1,"*", num_2,&
        num_1 * num_2               ! '*' corresponde à multiplicação
end program multiplicacao