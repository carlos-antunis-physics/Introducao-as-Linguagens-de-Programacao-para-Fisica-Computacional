program dados_complex
    implicit none
    !   Alocar dado do tipo 'double complex' que pode armazenar complexo
    double complex :: num           ! com partes real e complexa do tipo 'double precision'
    !   Requisitar um número complexo ao usuário
    print*, "Insira um número complexo:"
    read*, num                      ! efetua a leitura e armazena em 'num'
    !   Escrever o número complexo informado
    print*, "O número complexo informado foi:", num
end program dados_complex