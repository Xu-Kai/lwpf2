#define CPE

#include "lwpf_def_grp.h"
int test_caller(){
  lwpf_enter(TEST_GRP);
  lwpf_start(ALL);
  lwpf_start(A);
  if (_MYID == 0){
    int i;
    for (i = 0; i < 10; i ++)
      printf("%p\n", lwpf_local_counter);
  }
  lwpf_stop(A);

  lwpf_start(C);
  test_callee();
  lwpf_stop(C);
  lwpf_stop(ALL);
  lwpf_exit(TEST_GRP);
}
