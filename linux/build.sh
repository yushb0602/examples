#/bin/bash
gcc -g -o aio  aio.c -lrt
gcc -g -o pthread pthread_exam.c -lpthread

# so test
gcc -fPIC -c libprint.c
ld -shared -soname libprint.so.1 -o libprint.so.1.0 -lc libprint.o
ln -sf libprint.so.1 libprint.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
gcc -o client clientPrintstring.c -L. -lprint
