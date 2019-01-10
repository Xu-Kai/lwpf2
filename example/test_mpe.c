#define MPE
//#define LWPF_NOCOLOR
#define LWPF_UNITS U(test_unit) U(TEST_REINCLUDE) U(TEST_GRP)
#include "lwpf2.h"
#include <stdio.h>
extern void slave_test();
extern void slave_test_caller();
extern void slave_test_reinclude();
extern void slave_xxx_();
int main(){
  athread_init();
  perf_config_t conf;
  conf.pcrc = PCRC_ALL;
  conf.pcr0 = PC0_CYCLE;
  conf.pcr1 = PC1_CYCLE;
  conf.pcr2 = PC2_CNT_GLD;
  lwpf_init(&conf);
  athread_spawn(test, 0);
  athread_join();
  athread_spawn(test_caller, 0);
  athread_join();
  athread_spawn(test_reinclude, 0);
  athread_join();
  athread_spawn(xxx_, 0);
  athread_join();
  lwpf_report_summary(stdout, &conf);
  lwpf_report_summary_wide(stdout, &conf);
  lwpf_report_detail(stdout, &conf);
}
