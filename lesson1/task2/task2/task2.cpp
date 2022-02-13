#include <iostream>
using namespace std;

bool infinite(char);
void summ();
float result(float);
float enterNum(float);
float enterDeg(float);
bool cycle(float, float, char);
float bicycle(float, int);

bool infinite(char answer) {
    cout << "Do you want to repeat?(+ or -)" << endl;
    cin >> answer;
    bool degree = true;
    switch (answer) {
    case '+':
        degree = true;
        break;
    case '-':
        degree = false;
        break;
    }
    return degree;
}

void summ() {
    float num = 0, deg = 0, res = 0, sum = 0;
    char answer = 0;
    bool degree = 0;
    do {
        degree = cycle(num, deg, answer);
    } while (degree != false);
    return;
}

float result(float sum) {
    cout << "Your result: ";
    cout << sum << endl;
    return sum;
}

float enterNum(float num) {
    cout << "Enter number: ";
    cin >> num;
    return num;
}

float enterDeg(float deg) {
    cout << "Enter degree: ";
    cin >> deg;
    return deg;
}

bool cycle(float num, float deg, char answer) {
    num = enterNum(num);
    deg = enterDeg(deg);
    bool degree;
    float res;
    float sum = 0;
    for (int j = 1; j <= num; j++)
    {
        res = bicycle(deg, j);
        sum = sum + res;
    }
    sum = result(sum);
    degree = infinite(answer);
    return degree;
}

float bicycle(float deg, int j) {
    float res = 1.0;
    for (int i = 0; i < deg; i++)
    {
        res = res * j;
    }
    return res;
}

int main()
{
    summ();
    return 0;
}