#include<iostream>
void fun(int x, int y=2) ;

void fun(int x, int y) {
    std::cout << "x = " << x  << " y= "<< y <<  std::endl;
}
int  main() {
    fun(2);
    return 0;
}


