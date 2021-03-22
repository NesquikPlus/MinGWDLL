#ifndef TRY
#define TRY

#ifdef EXPORT_DLL
	#define SHARED_LIB __declspec(dllexport)
#else
	#define SHARED_LIB __declspec(dllimport)
#endif

typedef struct {
	int length;
	int color;
}Mango;


class Try
{
	public:
		int SHARED_LIB add(int x, int y);
		int sub(int x, int y);
};


#endif

//g++ -c -DEXPORT_DLL Try.cpp
//g++ -shared -o Try.dll Try.o -Wl,--out-implib,Try.a