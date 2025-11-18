#include <iostream>
#include <string>
using namespace std;

class Calculator
{
public:
    double calculate(double a, double b, string operation)
    {

        if (operation == "add" || operation == "+")
        {
            return a + b;
        }
        else if (operation == "subtract" || operation == "-")
        {
            return a - b;
        }
        else if (operation == "multiply" || operation == "*")
        {
            return a * b;
        }
        else if (operation == "divide" || operation == "/")
        {
            if (b == 0)
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        }
        else
        {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }
};

int main()
{
    double a, b;
    string operation;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter operation (add/subtract/multiply/divide or + - * /): ";
    cin >> operation;

    Calculator calc;
    double result = calc.calculate(a, b, operation);

    cout << "Result = " << result << endl;

    return 0;
}
