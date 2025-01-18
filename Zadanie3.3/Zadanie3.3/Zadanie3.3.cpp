#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Równanie kwadratowe ma postać: ax^2 + bx + c = 0" << endl;

    double a, b, c;
    cout << "Podaj współczynnik a: ";
    cin >> a;
    cout << "Podaj współczynnik b: ";
    cin >> b;
    cout << "Podaj współczynnik c: ";
    cin >> c;

    cout << "Twoje równanie kwadratowe: "
        << a << "x^2 + "
        << b << "x + "
        << c << " = 0" << endl;

    double delta = b * b - 4 * a * c;
    cout << "Delta wynosi: " << delta << endl;

    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "Równanie ma dwa pierwiastki: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        double x0 = -b / (2 * a);
        cout << "Równanie ma jeden pierwiastek: x0 = " << x0 << endl;
    }
    else {
        cout << "Równanie nie ma pierwiastków rzeczywistych." << endl;
    }

    return 0;
}