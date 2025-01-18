#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x, y;

    cout << "Podaj dwie liczby rzeczywiste (x i y): ";
    cin >> x >> y;

    float suma = x + y;
    float roznica = x - y;
    float iloczyn = x * y;
    float iloraz;

    cout << fixed << setprecision(2);

    cout << "Suma: " << suma << endl;
    cout << "Różnica: " << roznica << endl;
    cout << "Iloczyn: " << iloczyn << endl;

    if (y != 0) {
        iloraz = x / y;
        cout << "Iloraz: " << iloraz << endl;
    }
    else {
        cout << "Iloraz: Dzielenie przez zero jest niemożliwe!" << endl;
    }

    return 0;
}
