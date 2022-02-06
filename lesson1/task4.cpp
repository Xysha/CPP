#include <iostream>
using namespace std;

int main(){
    int n;
    float sum = 0.0;
    cout << "Enter the size of the massive: ";
    cin >> n;
    float *mass = new float[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << " element of the massive : ";
        cin >> mass[i]; 
        if ((mass[i] > 4.9) || (mass[i] < -4.9))
        {
            sum = sum + mass[i] * mass[i];
        }
    }
    cout << "Sum is " << sum << endl;
    if(sum < 24.01) {
            cout << "There is no number more than 4.9" << endl;
        }
    return 0;
}