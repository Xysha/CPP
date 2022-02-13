#include <iostream>
using namespace std;

float add(float, float);
float ded(float, float);
float divd(float, float);
float mult(float, float);
char infinite(char);

float enterVar1(float var1) {
    cout << "Enter first number: ";
    cin >> var1;
    return var1;
}

float enterVar2(float var2) {
    cout << "Enter second number: ";
    cin >> var2;
    return var2;
}

char enterAction(char action) {
    cout << "Choose action:" << endl;
    cout << "Enter +" << endl;
    cout << "Enter -" << endl;
    cout << "Enter /" << endl;
    cout << "Enter *" << endl;
    cin >> action;
    return action;
}

float cases(float var1, float var2, char action, char answer) {
    var1 = enterVar1(var1);
    var2 = enterVar2(var2);
    action = enterAction(action);
    bool calculator;
    switch (action) {
    case '+':
        var1 = add(var1, var2);
        break;
    case '-':
        var1 = ded(var1, var2);
        break;
    case '/':
        var1 = divd(var1, var2);
        break;
    case '*':
        var1 = mult(var1, var2);
        break;
    }
    cout << var1 << endl;
    calculator = infinite(answer);
    return calculator;
}

float add(float var1, float var2) {
    var1 = var1 + var2;
    return var1;
}

float ded(float var1, float var2) {
    var1 = var1 - var2;
    return var1;
}

float divd(float var1, float var2) {
    var1 = var1 / var2;
    return var1;
}

float mult(float var1, float var2) {
    var1 = var1 * var2;
    return var1;
}

char infinite(char answer) {
    bool calculator = true;
    cout << "Do you want to repeat?(+ or -) " << endl;
    cin >> answer;
    switch (answer) {
    case '+':
        calculator = true;
        break;
    case '-':
        calculator = false;
        break;
    }
    return calculator;
}

void calculator() {
    float var1 = 0, var2 = 0;
    char action = 0, answer = 0;
    bool calculator = 0;
    do {
        calculator = cases(var1, var2, action, answer);
    } while (calculator != false);
    return;
}

int main() {
    calculator();
    return 0;
}