#include <iostream>
int add(int a, int b)
{
    return a + b;
}
int minus(int a, int b)
{
    return a - b;
}
int divide(int a, int b)
{
    return a / b;
}
int getInput()
{
    int n;
    std::cout << "Input a number: ";
    std::cin >> n;
}
int main()
{
    std::cout << "Result is: " << add(getInput(), getInput());
    std::cout << "Result is: " << minus(getInput(), getInput());
    std::cout << "Result is: " << divide(getInput(), getInput());
}
