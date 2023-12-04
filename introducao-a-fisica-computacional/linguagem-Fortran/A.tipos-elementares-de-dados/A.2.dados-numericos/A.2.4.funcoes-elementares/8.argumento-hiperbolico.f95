program funcoes_argumento_hiperbolico
    implicit none
    !   Neste código efetuamos a alocação de dados do tipo
    !   'double precision', porém quaisquer tipos numéricos
    !   são operados de maneira equivalente
    double precision :: num
    !   Requisitar o operando ao usuário
    print*, "Insira o operando real:"
    read*, num
    !   Escrever os resultados das funções
    print*, "argsinh(",num,") =", asinh(num)
    print*, "argcosh(",num,") =", acosh(num)
    print*, "argtgh(",num,") =", atanh(num)
end program funcoes_argumento_hiperbolico