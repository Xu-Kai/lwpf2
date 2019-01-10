#define CPE

#include "lwpf_def_grp.h"
int test_callee(){
  lwpf_start(B);
  if (_MYID == 0){
    int i;
    for (i = 0; i < 100; i ++)
      printf("%p\n", lwpf_local_counter);
  }
  lwpf_stop(B);
}
