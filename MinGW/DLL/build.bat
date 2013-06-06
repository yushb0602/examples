g++ -c -DBUILDING_EXAMPLE_DLL example_dll.cpp
g++ -shared -o example_dll.dll example_dll.o -Wl,--out-implib,libexample_dll.a

g++ -c example_exe.cpp
g++ -o example_exe.exe example_exe.o -L. -lexample_dll