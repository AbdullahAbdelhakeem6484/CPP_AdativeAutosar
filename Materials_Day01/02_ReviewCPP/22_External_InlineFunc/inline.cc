#include<iostream>
class X {
    public:
        int x=10;
        void PrintInt(){
            std::cout << "In class A\n" << std::endl;
        }

    };


    int main()
    {
        X obj;
        obj.PrintInt();
        return 0;
    }
