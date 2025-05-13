#include <iostream>
#include <algorithm> // For std::find

int main()
{
    int s[] = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    // Find the number 5 in the array
    auto v = std::find(std::begin(s), std::end(s), 5);

    if (v != std::end(s)) // Check if the number was found
    {
        std::cout << *v << std::endl; // Output the found number
    }
    else
    {
        std::cout << "Number not found" << std::endl;
    }

    return 0;
}