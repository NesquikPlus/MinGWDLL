g++ -c -DEXPORT_DLL Try.cpp
g++ -shared -o Try.dll Try.o -Wl,--out-implib,Try.a