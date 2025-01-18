#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; // Liczba elementów w tablicy
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tablica musi zawierac co najmniej jeden element!" << endl;
        return 1;
    }

    vector<int> tablica(n); // Tworzenie tablicy o rozmiarze n

    cout << "Podaj " << n << " elementow tablicy:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }

    int maxElement = tablica[0]; // Przyjmujemy, że pierwszy element jest największy
    for (int i = 1; i < n; i++) {
        if (tablica[i] > maxElement) {
            maxElement = tablica[i];
        }
    }

    cout << "Najwiekszy element w tablicy to: " << maxElement << endl;

    return 0;
}

