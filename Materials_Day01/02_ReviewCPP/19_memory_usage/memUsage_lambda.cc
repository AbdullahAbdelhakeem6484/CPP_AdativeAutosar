#include<iostream>

int main(){
    [](){
        std::cout << "Hello " << std::endl;
    }();
    // The lambda function is defined and called immediately
    // This is a common pattern for creating anonymous functions in C++.

    return 0;
}

