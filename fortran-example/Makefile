all: test_lwpf_fortran
test_lwpf_fortran: main.o lwpf_mpe.o kernel_c.o kernel_f.o lwpf_cpe_f.o  
	sw5f90 -hybrid $^ -o $@
main.o: main.f90
	sw5f90 -host -c $^ -msimd -O2 -I..
lwpf_mpe.o: lwpf_mpe.c
	sw5cc -host -c $^ -msimd -O2 -I..
kernel_c.o: kernel_c.c
	sw5cc -slave -c $^ -msimd -O2 -I..
kernel_f.o: kernel_f.f90
	sw5f90 -slave -c $^ -msimd -O2 -I..
lwpf_cpe_f.o: lwpf_cpe_f.c
	sw5cc -slave -c $^ -msimd -O2 -I..
clean:
	rm -vf *.o test_lwpf_fortran
