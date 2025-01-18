#include <iostream>
#include <vector>
using namespace std;

int wspolczynnikNewtona(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return wspolczynnikNewtona(n - 1, k - 1) + wspolczynnikNewtona(n - 1, k);
}

int main() {
    int liczbaWierszy;

    cout << "Podaj liczbe wierszy trojkata Pascala: ";
    cin >> liczbaWierszy;

    for (int i = 0; i < liczbaWierszy; i++) {
 
        for (int j = 0; j < liczbaWierszy - i - 1; j++) {
            cout << " ";
        }

       
        for (int k = 0; k <= i; k++) {
            cout << wspolczynnikNewtona(i, k) << " ";
        }

        cout << endl;
    }

    return 0;
}