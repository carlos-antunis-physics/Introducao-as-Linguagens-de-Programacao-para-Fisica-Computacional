program dados_integer
    implicit none
    !   Alocar dado do tipo 'integer' que pode armazenar inteiros
    integer :: num                  ! entre (-2^31) e (+2^31 - 1)
    !   Requisitar um número inteiro ao usuário
    print*, "Insira um número inteiro:"
    read*, num                      ! efetua a leitura e armazena em 'num'
    !   Escrever o número inteiro informado
    print*, "O número inteiro informado foi:", num
end program dados_integer