#include <iostream>

using namespace std;

void drukujL(int grubosc, int wysokosc, int szerokosc) {
    for (int i = 0; i < wysokosc - 1; i++) {
        for (int j = 0; j < grubosc; j++) {
            cout << "L";
        }
        cout << endl;
    }


    for (int j = 0; j < szerokosc; j++) {
        cout << "L";
    }
    cout << endl;
}

int main() {
    int grubosc, wysokosc, szerokosc;

 
    cout << "Podaj grubość litery L: ";
    cin >> grubosc;
    cout << "Podaj wysokość litery L: ";
    cin >> wysokosc;
    cout << "Podaj szerokość litery L: ";
    cin >> szerokosc;

    drukujL(grubosc, wysokosc, szerokosc);

    return 0;
}
