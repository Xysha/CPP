#include <iostream>
using namespace std;

int main() {
    float alt1, alt2;
    char action, answer;
    bool culk = true;
    do{
        cout << "Enter first number: ";
        cin >> alt1;
        cout << "Enter second number: ";
        cin >> alt2;
        cout << "Choose action:" << endl;
        cout << "Enter +" << endl;
        cout << "Enter -" << endl;
        cout << "Enter /" << endl;
        cout << "Enter *" << endl;
        cin >> action;
        switch (action) {
        case '+':
            alt1 = alt1 + alt2;
            cout << alt1 << endl;
            break;
        case '-':
            alt1 = alt1 - alt2;
            cout << alt1 << endl;
            break;
        case '/':
            alt1 = alt1 / alt2;
            cout << alt1 << endl;
            break;
        case '*':
            alt1 = alt1 * alt2;
            cout << alt1 << endl;
            break;
        }
        cout << "Do you want to repeat?(+ or -) " << endl;
        cin >> answer;
        switch (answer) {
            case '+':
                culk = true;
                break;
            case '-':
                culk = false;
                break;
            }
    } while (culk != false);
    return 0;
}