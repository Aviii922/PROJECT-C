#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;

    cout << "===== Simple Calculator =====" << endl;

    
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;


    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if (num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;

        case '%':
            if ((int)num2 != 0)
                cout << "Result = " << (int)num1 % (int)num2;
            else
                cout << "Error! Modulus by zero is not allowed.";
            break;

        default:
            cout << "Invalid Operator!";
    }

    return 0;
}