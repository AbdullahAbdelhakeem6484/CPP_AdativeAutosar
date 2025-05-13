#include <iostream>
#include <string>
#include <typeinfo>

int main()
{
        auto i = std::stol("123");
        std::cout << typeid(i).name() << std::endl;
        return 0;
}
