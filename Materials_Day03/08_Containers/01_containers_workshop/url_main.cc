// main.cpp
#include <iostream>
#include "url.h"

int main() {
    URL url("http", "example.com/index.html");
	std::cout << url.get() << "\n";
}