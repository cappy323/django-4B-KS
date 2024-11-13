#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; ++i) {
        cout << 'X';
    }
    cout << endl;
    for (int i = 0; i < b-1; ++i) {
    cout << "X  X" << endl;
    }
     for (int i = 0; i < a; ++i) {
    cout << "X";
     }
}