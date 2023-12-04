program conjuncao_logical
    implicit none
    logical :: tres_e_int = .true., dois_e_int = .true., cinco_e_int
    !   Escrever o valor lógico da conjunção das afirmacões
    cinco_e_int =&
        tres_e_int .and. dois_e_int !'.and.' corresponde à conjunção
    print*, "5 ser um número inteiro é", cinco_e_int
end program conjuncao_logical