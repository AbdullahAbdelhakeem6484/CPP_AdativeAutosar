#include<iostream>
using namespace std;
int sum(int a, int b) {
    return a + b;
}


int main()
{
    constexpr int result = sum(10, rand());

    const int result = sum(10, rand());
    cout << result;
    return 0;
    return 0;
}



