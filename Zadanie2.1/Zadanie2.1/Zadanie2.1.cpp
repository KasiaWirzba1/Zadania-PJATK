#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj wartosc n: ";
    cin >> n;

    int sumaSzeregu = 0;

    cout << endl;

    for (int i = 1; i <= n; i++) {
        int sumaPodciagu = 0;

        for (int j = 1; j <= i; j++) {
            sumaPodciagu += j;
            cout << j;
            if (j < i) {
                cout << " + ";
            }
        }

        sumaSzeregu += sumaPodciagu;
        cout << " = " << sumaPodciagu << endl;
    }

    cout << "AP Suma szeregu: ";

    int tempSuma = 0;
    for (int i = 1; i <= n; i++) {
        tempSuma += i * (i + 1) / 2;
        cout << tempSuma;
        if (i < n) {
            cout << " + ";
        }
    }
    cout << " = " << sumaSzeregu << endl;

    return 0;
}