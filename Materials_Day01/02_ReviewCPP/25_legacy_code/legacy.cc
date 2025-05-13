/*
g++ legacy.cc cfile.c -o output
./output
*/
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
extern "C" {
    #include "cfile.h"
}

using namespace std;

void fun(int x)
{
    std::cout << "hello world" << std::endl;
}

void fun(int x, int y)
{
    std::cout << "hello world" << std::endl;
}

int main()
{
    fun(2);
    fun(2,3);
    display();
    return 0;
}
