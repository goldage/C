all:
	gcc -shared -g -Xlinker --script -Xlinker ld.s test.c -o libtest.so
	gcc -shared -g -Xlinker --script -Xlinker ld1.s test1.c -o libtest1.so
	gcc -g main.c -L./ -ltest -ltest1 -Wl,-rpath=/home/laurence/c/linker\&loader/ex1_ldscript,-Map,test.map -o test

clean:
	rm -f *.so test
