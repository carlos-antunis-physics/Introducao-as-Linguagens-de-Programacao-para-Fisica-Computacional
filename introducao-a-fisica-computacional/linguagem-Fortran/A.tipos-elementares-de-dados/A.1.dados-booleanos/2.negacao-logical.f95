program negacao_logical
    implicit none
    logical :: dois_e_primo = .true., dois_e_composto
    !   Escrever o valor lógico da negação da afirmação
    dois_e_composto =&              ! '&' quebra a linha
        .not. dois_e_primo          ! '.not.' corresponde à negação
    print*, "2 ser um número composto é", dois_e_composto
end program negacao_logical