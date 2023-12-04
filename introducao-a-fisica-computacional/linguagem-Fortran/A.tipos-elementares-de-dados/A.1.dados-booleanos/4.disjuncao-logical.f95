program conjuncao_logical
    implicit none
    logical :: tres_e_pos = .true., dois_e_pos = .true., seis_e_pos
    !   Escrever o valor lógico da disjunção das afirmacões
    seis_e_pos =&
        tres_e_pos .or. dois_e_pos !'.or.' corresponde à disjunção
    print*, "5 ser um número positivo é", seis_e_pos
end program conjuncao_logical