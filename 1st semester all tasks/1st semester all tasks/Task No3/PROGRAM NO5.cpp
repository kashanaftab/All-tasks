#include <iostream>
using namespace std;

int main() {
    int choice;
    float num1, num2, result;

    cout << "Simple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    while (1) {
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5)
            break;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (choice) {
 case 1:
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << num1 << " / " << num2 << " = " << result << endl;
                } else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }
 }

    return 0;
}
