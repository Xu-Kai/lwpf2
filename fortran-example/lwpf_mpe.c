/*************************************************************************
  > File Name: lwpf_interface.c
  > Author: Xu Kai
  > Created Time: 2018年12月26日 星期三 15时48分34秒
 ************************************************************************/


#include<stdio.h>
#include<stdlib.h>

#define MPE
#define LWPF_NOCOLOR
#define LWPF_UNITS U(test) 
#include "lwpf2.h"

perf_config_t conf;
void lwpf_init_(){

    conf.pcrc = PCRC_ALL;
    conf.pcr0 = PC0_CYCLE;
    conf.pcr1 = PC1_CYCLE;
    conf.pcr2 = PC2_CNT_GLD;
    lwpf_init(&conf);

}

void lwpf_report_summary_(){

    lwpf_report_summary_wide(stdout, &conf);

}
