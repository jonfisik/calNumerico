! Autor: Jonatan Paschoal
! Data: 01 - mar - 2023
! Somatório (S = x1 + x2 + x3 + x4; xi = i)
       program somatorio
       implicit none

       integer:: i,S
       S=0 
       do i=1,4
          S=S + i  
       enddo  
       
       write(*,*)"Soma", S

       end program somatorio
