#include<iostream>
using namespace std;


class foo
{
private:
    int m_num=12;
    static int temp;
public :
    static void fun(){
        int value=12; //1- create local
        //m_num=123; //2-Error cannot access this
        temp++; //3- access static members
    }
    static void test(); //4- static method
};

int foo::temp=1;

void foo::test() // no static word
{
     cout << "test" << endl; //5- static method
}

int main()
{
    foo d;
    d.fun(); //4- calling from class
    foo::fun(); //5- calling from instance
}
