#include <iostream>
using namespace std;

int enter(int count) {
    cout << "Enter number: " << endl;
    cin >> count;
    return count;
}
int devd(int count) {
    int c1;
    c1 = count % 10;
    return c1;
}

int divd(int count) {
    int c2;
    c2 = count / 10;
    return c2;
 }

void els(int c1, int c2) {
    if (c1 > c2) {
        cout << c2 << " " << c1 << endl;
    }
    else if (c1 < c2) {
        cout << c1 << " " << c2 << endl;
    }
    else {
        cout << "They are equal: " << c1 << " " << c2 << endl;
    }
    return;
}

void equal() {
    int count = 0, c1 = 0, c2 = 0;
    count = enter(count);
    c1 = devd(count);
    c2 = divd(count);
    els(c1, c2);
    return;
}

int main() {
    equal();
    return 0;
}