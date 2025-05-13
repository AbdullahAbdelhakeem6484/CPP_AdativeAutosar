#include <iostream>
using namespace std;
class Data {
    public:
        bool flag = 1;
        int value = 0;
        Data();
        Data(bool flag);
        Data(bool flag, int value);
        void PrintInt() {
            cout << " In class A\n";
        }
    };

    Data::Data() {
        std::cout << "Default" << std::endl;
    }

    Data::Data(bool flag) : Data() {
        this->flag = flag;
        std::cout << "1 Param" << std::endl;
    }

    Data::Data(bool flag, int value) : Data(flag) {
        this->value = value;
        std::cout << "2 Param" << std::endl;
    }
    int main() {
        // Data d1;
        // Data d2(true);
        Data d3(true, 10);
        return 0;
    }
