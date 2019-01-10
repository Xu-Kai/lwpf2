subroutine xxx
  implicit none
  call lwpf_enter_test_unit()
  call lwpf_start_test_unit_kernel_b()
  call lwpf_stop_test_unit_kernel_b()
  call lwpf_exit_test_unit()
end subroutine xxx
