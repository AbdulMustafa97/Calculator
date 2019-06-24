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
int multiply(int a, int b)
{
    return a * b;
}
int getInput()
{
    int n;
    std::cout << "Input a number: ";
    std::cin >> n;
}
int main()
{
    int n;
    while (1)
    {
        std::cout << "\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\nAny key to exit.\nInput: ";
        std::cin >> n;
        switch (n)
        {
        case 1:
            n = add(getInput(), getInput());
            break;
        case 2:
            n = minus(getInput(), getInput());
            break;
        case 3:
            n = multiply(getInput(), getInput());
            break;
        case 4:
            n = divide(getInput(), getInput());
            break;
        default:
            std::cout << "Program exit!." << std::endl;
            goto terminate;
        }
        std::cout << "Result is: " << n << std::endl;
    }
terminate:
    return 0;
}
