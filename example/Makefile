all: test_lwpf
test_lwpf: test_mpe.o test_cpe.o test_cpe_grp1.o test_cpe_grp2.o test_cpef.o
	sw5cc -hybrid $^ -o $@
test_mpe.o: test_mpe.c
	sw5cc -host -c test_mpe.c -msimd -O2 -I..
test_cpe.o: test_cpe.c
	sw5cc -slave -c test_cpe.c -msimd -O2 -I..
test_cpef.o: test_cpef.f90
	sw5f90 -slave -c test_cpef.f90 -msimd -O2 -I..
test_cpe_grp1.o: test_cpe_grp1.c lwpf_def_grp.h
	sw5cc -slave -c test_cpe_grp1.c -msimd -O2 -I..
test_cpe_grp2.o: test_cpe_grp2.c lwpf_def_grp.h
	sw5cc -slave -c test_cpe_grp2.c -msimd -O2 -I..
clean:
	rm -vf *.o test_lwpf
