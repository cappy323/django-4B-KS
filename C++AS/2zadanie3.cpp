#include <iostream>
#include <cmath>

using namespace std;

void rozwiazRownanieKwadratowe(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            cout << "Równanie nie ma rozwiązań, chyba że c = 0." << endl;
        } else {
            cout << "Równanie liniowe, jedno rozwiązanie: x = " << -c / b << endl;
        }
        return;
    }

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Dwa rozwiązania: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "Jedno podwójne rozwiązanie: x = " << x << endl;
    } else {
        cout << "Brak rozwiązań rzeczywistych." << endl;
    }
}

int 2zadanie3() {
    double a, b, c;

    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    rozwiazRownanieKwadratowe(a, b, c);

    return 0;
}
