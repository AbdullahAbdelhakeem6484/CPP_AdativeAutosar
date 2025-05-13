#include <iostream>

int This_x_Data_Section;
int This_x_BSS = 10;


void test_section(){
    std::cout << "text Section";
}

int main() {
    int This_x_Stack = 0;
    std::cout << "Hello World " << This_x_Stack << std::endl;
    return 0;
}
