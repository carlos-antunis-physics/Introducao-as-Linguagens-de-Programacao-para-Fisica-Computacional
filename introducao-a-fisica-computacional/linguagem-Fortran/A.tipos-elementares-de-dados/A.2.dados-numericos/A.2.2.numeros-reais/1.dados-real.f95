program dados_real
    implicit none
    !   Alocar dado do tipo 'real' que pode armazenar real com magnitude
    real :: num                     ! entre 1.2E-38 e 3.4E+38 e precisão de 6 casas
    !   Requisitar um número real ao usuário
    print*, "Insira um número real:"
    read*, num                      ! efetua a leitura e armazena em 'num'
    !   Escrever o número real informado
    print*, "O número real informado foi:", num
end program dados_real