#define CPE

#define LWPF_KERNELS K(kernel_a) K(kernel_b) K(kernel_c)
#define LWPF_UNIT U(test_unit)
#include "lwpf2.h"
#include "lwpf2_fortapi.h"
int test(){
  lwpf_enter(test_unit);
  lwpf_start(kernel_a);
  if (_MYID == 0){
    int i;
    for (i = 0; i < 10; i ++)
      printf("%p\n", lwpf_local_counter);
  }
  lwpf_stop(kernel_a);
  lwpf_exit(test_unit);
}

#include "lwpf2_undef.h"
#define LWPF_KERNELS K(AA) K(BB) K(CC)
#define LWPF_UNIT U(TEST_REINCLUDE)
#include "lwpf2.h"
int test_reinclude(){
  lwpf_enter(TEST_REINCLUDE);
  lwpf_start(BB);
  if (_MYID == 0)
    simd_print_int256(lwpf_local_counter[AA]);
  lwpf_start(AA);
  if (_MYID == 0)
    simd_print_int256(lwpf_local_counter[AA]);
  lwpf_stop(AA);
  if (_MYID == 0)
    simd_print_int256(lwpf_local_counter[AA]);
  lwpf_stop(BB);
  lwpf_exit(TEST_REINCLUDE);
}
