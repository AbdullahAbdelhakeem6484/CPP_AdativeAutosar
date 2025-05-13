#include <iostream>
using namespace std;
class Data {
    public:
        bool flag = 1;
        int value = 0;
        Data() = delete;
        Data(int flag);
        void PrintInt() {
            cout << " In class A\n";
        }
    };

    Data::Data() {
        std::cout << "Default" << std::endl;
    }

    Data::Data(int flag) {
    }

    int main() {
        // the default constructor of "Data" cannot be referenced -- it is a deleted function
        Data d;
        return 0;
    }
