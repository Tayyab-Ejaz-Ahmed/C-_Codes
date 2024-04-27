#include <iostream>
using namespace std;
int main() {
    cout << "Hello World" << endl;
    cout << "This code is being flying to the github repository!" << endl;
    cout << "Happy landing!" << endl;

    cout << "lets make a simple calculator" << endl;
    int num1, num2;
    int option;

    cout << "Enter num 1" << endl;
    cin >> num1;
    cout << "Enter num 2" << endl;
    cin >> num2;

    cout << "1: sum" << endl;
    cout << "2: sub" << endl;
    cin >> option;

    switch (option)
    {
    case 1:/* constant-expression */
        /* code */
        int sum;
        sum = num1 + num2;
        cout << "The sum of the numbers are: " << sum;
        break;
case 2:
        int sub; 
        sub = num1 - num2;
        cout << "The sub of the numbers are: " << sub;
    break;
    default:
    cout << "Invalid input!" << endl;
        break;
    }
    cout << "This was the simple experiment to test push operation to the github";
    return 0;
}