program funcoes_hiperbolicas
    implicit none
    !   Neste código efetuamos a alocação de dados do tipo
    !   'double precision', porém quaisquer tipos numéricos
    !   são operados de maneira equivalente
    double precision :: num
    !   Requisitar o operando ao usuário
    print*, "Insira o operando real:"
    read*, num
    !   Escrever os resultados das funções
    print*, "sinh(",num,") =", sinh(num)
    print*, "cosh(",num,") =", cosh(num)
    print*, "tgh(",num,") =", tanh(num)
end program funcoes_hiperbolicas