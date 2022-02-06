#include <iostream>
using namespace std;

int main()
{
    float num, deg, res, sum;
    char answer;
    bool degree = true;
    do {
        res = 1.0;
        sum = 0; 
        cout << "Enter number: ";
        cin >> num;
        cout << "Enter degree: ";
        cin >> deg;
        for (int j = 1; j <= num; j++)
        {
            for (int i = 0; i < deg; i++)
            {
                res = res * j;
            }
            sum = sum + res;
        }
        cout << "Your result: ";
        cout << sum << endl;
        cout << "Do you want to repeat?(+ or -) " << endl;
        cin >> answer;
        switch (answer) {
        case '+':
            degree = true;
            break;
        case '-':
            degree = false;
            break;
        }
    } while (degree != false);
    return 0;
}