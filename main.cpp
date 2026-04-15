#include <iostream>
using namespace std;

int main()
{
    char op;     // Charcter is operator 'op'
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        if (num2 != 0) // everyone knows if the division over zero is incorrect 'Error' so i use the condition if to fix it 
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        else
            cout << "Error, Division by zero.";
        break;
    default:
        cout << "Error, Operator isn't correct"; // if the operator are not (+, -, *, /) ==> Error
        break;
    }

    return 0;
}