#include <iostream>

struct Data
{
    int x;
    int y;

    // Overloading the equality operator
    bool operator==(const Data& temp) const
    {
        return (temp.x == x) && (temp.y == y);
    }
};

int main()
{
    Data d1 = {1, 2}; // Initialize d1
    Data d2 = {1, 2}; // Initialize d2

    if (d1 == d2) // Compare d1 and d2
    {
        std::cout << "Equal" << std::endl;
    }
    else
    {
        std::cout << "Not Equal" << std::endl;
    }

    return 0;
}