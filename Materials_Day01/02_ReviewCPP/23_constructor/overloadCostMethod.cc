#include <iostream>
using namespace std;
class Data {
    public:
        bool flag = 1;
        int value = 0;
        Data() = default; // Default constructor
        Data(int flag) : flag(flag) {} // Constructor with one parameter
        Data(int flag, int value) : flag(flag), value(value) {} // Constructor with two parameters

        void fun(int temp) { // Non-const method
            std::cout << "Hello from method" << std::endl;
        }

        void fun(int temp) const { // Const method
            std::cout << "Hello from const method" << std::endl;
        }

        void method1() {}

};





int main() {
    Data d;
    d.fun(1); // Calls non-const fun(int)

    const Data k;
    k.fun(1); // Calls const fun(int)

    return 0;
}
