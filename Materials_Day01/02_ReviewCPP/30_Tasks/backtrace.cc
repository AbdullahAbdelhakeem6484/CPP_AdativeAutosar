#include <iostream>
#include <stack>
#include <string>

class Backtrace
{
private:
    std::stack<std::string> callStack;

public:
    void enterFunction(const std::string& functionName)
    {
        callStack.push(functionName);
        std::cout << "Enter to [" << functionName << "]" << std::endl;
    }

    void exitFunction()
    {
        if (!callStack.empty())
        {
            std::cout << "Exit From [" << callStack.top() << "]" << std::endl;
            callStack.pop();
        }
    }

    void printBacktrace()
    {
        std::cout << "Backtrace as follows:" << std::endl;
        std::stack<std::string> tempStack = callStack;
        int index = 0;
        while (!tempStack.empty())
        {
            std::cout << index++ << "- " << tempStack.top() << std::endl;
            tempStack.pop();
        }
        std::cout << "Back Trace is Finished" << std::endl;
    }
};

// Global instance of Backtrace
Backtrace backtrace;

#define EnterFn backtrace.enterFunction(__FUNCTION__)
#define ExitFn backtrace.exitFunction()
#define PRINT_BT backtrace.printBacktrace()

void fun3(int x)
{
    EnterFn;
    PRINT_BT;
    ExitFn;
}

void fun2(int x)
{
    EnterFn;
    fun3(3);
    ExitFn;
}

void fun1(int x)
{
    EnterFn;
    fun2(2);
    ExitFn;
}

int main()
{
    EnterFn;
    fun1(3);
    ExitFn;
    return 0;
}