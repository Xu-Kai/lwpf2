!*************************************************************************
!	> File Name: kernel_f.f90
!	> Author: Xu Kai
!	> Created Time: 2018年12月26日 星期三 15时52分44秒
! ************************************************************************/
!	
!	

subroutine kernel_f 
    implicit none
    integer :: i

    call lwpf_enter_test()
    call lwpf_start_test_kernel_b()
    i = 0
    i  = i + 1
    
    call lwpf_stop_test_kernel_b()
    call lwpf_exit_test()

end subroutine

