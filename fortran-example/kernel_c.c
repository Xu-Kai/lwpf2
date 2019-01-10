/*************************************************************************
	> File Name: kernel_c.c
	> Author: Xu Kai
	> Created Time: 2018年12月26日 星期三 15时52分36秒
 ************************************************************************/
	
	
#include<stdio.h>
#include<stdlib.h>
#include<slave.h>
#include "lwpf_cpe_c.h"

void kernel_c_(){


  lwpf_enter(test);
  lwpf_start(kernel_a);
  if (_MYID == 0){
    int i;
    i ++;
    //for (i = 0; i < 10; i ++)
    //  printf("%p\n", lwpf_local_counter);
  }
  lwpf_stop(kernel_a);
  lwpf_exit(test);
}
