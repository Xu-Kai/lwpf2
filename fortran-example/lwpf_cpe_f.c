/*************************************************************************
	> File Name: lwpf_cpe_f.c
	> Author: Xu Kai
	> Created Time: 2018年12月26日 星期三 16时13分02秒
 ************************************************************************/
	

#include<stdio.h>
#include<stdlib.h>

#define CPE
#define LWPF_KERNELS K(kernel_a) K(kernel_b) K(kernel_c)
#define LWPF_UNIT U(test)
#include "lwpf2.h"
#include "lwpf2_fortapi.h"


