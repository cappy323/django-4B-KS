#include <iostream>

using namespace std;

int 2zadanie4() {
    int a, b;
    char operation;

    cout << "Podaj dwie liczby całkowite: ";
    cin >> a >> b;

    cout << "Podaj działanie (+, -, *, /, %): ";
    cin >> operation;

    if (operation == '/' && b == 0) {
        cout << "nie dziel przez 0" << endl;
    } else if (operation == '%' && b == 0) {
        cout << "nie dziel przez 0" << endl;
    } else {
        switch (operation) {
            case '+':
                cout << "Wynik: " << a + b << endl;
                break;
            case '-':
                cout << "Wynik: " << a - b << endl;
                break;
            case '*':
                cout << "Wynik: " << a * b << endl;
                break;
            case '/':
                cout << "Wynik: " << a / b << endl;
                break;
            case '%':
                cout << "Wynik: " << a % b << endl;
                break;
            default:
                cout << "błąd." << endl;
                break;
        }
    }

    return 0;
}
