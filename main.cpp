#include <iostream>

using namespace std;

int main()
{
    float number1, number2;
    char op;

    cout << "   What do you want to calculate?   \n";
    while (true) {
        cin >> number1;

        if (number1 == 0) {
            cout << "Bye";
            break;
        }

        cin >> op >> number2;

        switch (op) {
            case '-':
                cout << number1 - number2;
                break;

            case '+':
                cout << number1 + number2;
                break;

            case '/':
                cout << number1 / number2;
                break;

            case 'x':
                cout << number1 * number2;
                break;

            case '*':
                cout << number1 * number2;
                break;

            default:
                cout << "Invalid operator. Choose: -, +, / or x";
        }
        cout << "\n\n   What do you want to calculate?   \n";
    }
    return 0;
}
