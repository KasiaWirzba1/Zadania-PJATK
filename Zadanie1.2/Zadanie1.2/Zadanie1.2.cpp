#include <iostream>
using namespace std;

int main() {
    int liczba;

    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    if (liczba > 0) {
        cout << "Liczba jest dodatnia." << endl;
    }
    else if (liczba < 0) {
        cout << "Liczba jest ujemna." << endl;
    }
    else {
        cout << "Liczba jest zerem." << endl;
    }

    return 0;
}