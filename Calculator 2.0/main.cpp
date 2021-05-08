#include <iostream>

double getValue()
{
    while (true) {
        //user input (number)
        std::cout << "Enter a double value: ";
        double a;
        std::cin >> a;
        //input check
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
        return a;
    }
}

char getOperator()
{
    while (true)
    {
        //user input (symbol)
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char sm;
        std::cin >> sm;
        //input check
        switch (sm)
        {
            //fall-through for the correct symbols
        case '+':
        case '-':
        case '*':
        case '/':
            return sm;
            break;
        default:
            std::cout << "Ooops, that's isn't correct input, that's a bullshit!\n";
            break;
        }
    }
}

void printResult(double a, char sm, double b)
{
    if (sm == '+')
        std::cout << a << " + " << b << " is " << a + b << '\n';
    else if (sm == '-')
        std::cout << a << " - " << b << " is " << a - b << '\n';
    else if (sm == '*')
        std::cout << a << " * " << b << " is " << a * b << '\n';
    else if (sm == '/')
        std::cout << a << " / " << b << " is " << a / b << '\n';
}

int main()
{
    double a = getValue();
    char sm = getOperator();
    double b = getValue();

    printResult(a, sm, b);

    return 0;
}