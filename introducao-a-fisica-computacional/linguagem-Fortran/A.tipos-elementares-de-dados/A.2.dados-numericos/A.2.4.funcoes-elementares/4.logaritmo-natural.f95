program funcao_logaritmo_natural
    implicit none
    !   Neste código efetuamos a alocação de dados do tipo
    !   'double precision', porém quaisquer tipos numéricos
    !   são operados de maneira equivalente
    double precision :: num
    !   Requisitar o operando ao usuário
    print*, "Insira o operando real:"
    read*, num
    !   Escrever os resultados da função
    print*, "ln(",num,") =", log(num)
end program funcao_logaritmo_natural