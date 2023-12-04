program dados_double_precision
    implicit none
    !   Alocar dado do tipo 'real' que pode armazenar real com magnitude
    double precision :: num         ! entre 2.3E-308 e 1.7E+308 e precisão de 15 casas
    !   Requisitar um número real ao usuário
    print*, "Insira um número real:"
    read*, num                      ! efetua a leitura e armazena em 'num'
    !   Escrever o número real informado
    print*, "O número real informado foi:", num
end program dados_double_precision