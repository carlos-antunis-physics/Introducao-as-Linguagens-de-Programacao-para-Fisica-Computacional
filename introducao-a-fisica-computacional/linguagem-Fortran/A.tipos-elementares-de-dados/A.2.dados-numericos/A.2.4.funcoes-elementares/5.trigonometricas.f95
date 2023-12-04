program funcoes_trigonometricas
    implicit none
    !   Neste código efetuamos a alocação de dados do tipo
    !   'double precision', porém quaisquer tipos numéricos
    !   são operados de maneira equivalente
    double precision :: num
    !   Requisitar o operando ao usuário
    print*, "Insira o operando real:"
    read*, num
    !   Escrever os resultados das funções
    print*, "sin(",num,") =", sin(num)
    print*, "cos(",num,") =", cos(num)
    print*, "tg(",num,") =", tan(num)
end program funcoes_trigonometricas