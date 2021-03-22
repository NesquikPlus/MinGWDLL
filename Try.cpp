#include "Try.h"

int Try::add(int x, int y)
{
	return x + y;
}

int Try::sub(int x, int y)
{
	return x - y;
}

//g++ -c Try.cpp
//g++ -o Try.dll -s -shared Try.o -Wl,--subsystem,windows
