#include <iostream>
using namespace std;

int main(){
    int count, c1, c2;
    cout << "Enter number: " << endl;
    cin >> count;
    c1 = count % 10;
    c2 = count / 10;
    if (c1 > c2) {
        cout << c2 << " " << c1 << endl;
    }
    else if (c1 < c2) {
        cout << c1 << " " << c2 << endl;
    }
    else {
        cout << "They are equal: " << c1 << " " << c2 << endl;
    }
    return 0;
}