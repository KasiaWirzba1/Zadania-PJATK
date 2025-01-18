#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "Podano liczby: a = " << a << ", b = " << b << endl;

    cout << "\n";

    cout << "Wiersz gwiazdek o dlugosci a:" << endl;
    for (int i = 0; i < a; i++) {
        cout << "*";
    }
    cout << "\n\n";

    cout << "Kolumna gwiazdek o dlugosci b:" << endl;
    for (int i = 0; i < b; i++) {
        cout << "*" << endl;
    }
    cout << "\n";

    cout << "Wypelniony prostokat o wymiarach a x b:" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n";

    cout << "Obwod prostokata o wymiarach a x b:" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "\n";

    cout << "Trojkat prostokatny z katem prostym w lewym dolnym rogu:" << endl;
    for (int i = 1; i <= a; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n";

    cout << "Trojkat prostokatny z katem prostym w prawym gornym rogu:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (j < i) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}