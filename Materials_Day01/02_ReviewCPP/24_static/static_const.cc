#include <iostream>

// Class definition
class Data {
public:
    static int value;         // Static variable: must be defined outside the class
    static int valuep;        // Another static variable
    static const int value2;  // Static const: can be defined outside if it's not a literal or initialized with non-integral

    // Constructor taking an int (previous comment suggests this)
    Data(int m) : value3(m) {}

private:
    int value3;  // Instance member
};

// Definition of static members outside the class
int Data::value = 0;
int Data::valuep = 0;
const int Data::value2 = 0;  // OK: definition of static const

// Another class demonstrating a static const member
class foo {
public:
    static const int value = 1;

    // Removed the invalid declaration of 'foo d;' inside the class
    // That would cause infinite recursion or invalid object layout
};

int main() {
    // Create an instance of foo
    foo myFoo;

    // Access the static const member
    int fooValue = foo::value;
    std::cout << "foo::value = " << fooValue << std::endl;

    // Create an instance of Data
    Data myData(5);
    std::cout << "Data::value2 = " << Data::value2 << std::endl;

    return 0;
}
