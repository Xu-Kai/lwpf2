!/*************************************************************************
!	> File Name: main.f90
!	> Author: Xu Kai
!	> Created Time: 2018年12月26日 星期三 15时45分41秒
! ************************************************************************/
!	
!	
program main
integer, external :: slave_kernel_c
integer, external :: slave_kernel_f

call athread_init() 

call lwpf_init()

call athread_spawn(slave_kernel_c, 0)
call athread_join()

call athread_spawn(slave_kernel_f, 0)
call athread_join()

call lwpf_report_summary()

end program 
