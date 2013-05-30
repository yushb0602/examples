main: libshared.so main.o
	g++ -o main  main.o -L. -lshared

libshared.so: shared.cpp
	g++ -fPIC -c shared.cpp -o shared.o
	g++ -shared  -Wl,-soname,libshared.so -o libshared.so shared.o

clean:
	rm *.o *.so
