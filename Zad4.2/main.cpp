#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tablica musi zawierac co najmniej jeden element!" << endl;
        return 1;
    }

    vector<int> tablica(n);
    cout << "Podaj " << n << " elementow tablicy:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> tablica[i];
    }

    // Słownik do przechowywania liczby wystąpień każdego elementu
    unordered_map<int, int> wystapienia;

    // Zliczanie wystąpień
    for (int liczba : tablica) {
        wystapienia[liczba]++;
    }

    // Szukanie elementu najczęściej występującego
    int najczestszy = tablica[0];
    int maxWystapienia = 0;

    for (const auto& para : wystapienia) {
        if (para.second > maxWystapienia) {
            najczestszy = para.first;
            maxWystapienia = para.second;
        }
    }

    cout << "Najczesciej wystepujacy element to: " << najczestszy
         << " (wystapienia: " << maxWystapienia << ")" << endl;

    return 0;
}
