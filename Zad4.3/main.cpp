#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main() {
    const int rows = 10;
    const int cols = 10;
    int tablica[rows][cols] = {0}; // Inicjalizacja zerami

    // Wypełnianie tablicy
    for (int i = 0; i < rows; i++) {
        tablica[i][0] = i;             // Pierwsza kolumna: liczby od 0 do 9
        tablica[i][1] = i + i;         // Druga kolumna: suma (np. 0+0, 1+1, ...)
        tablica[i][2] = i * i;         // Trzecia kolumna: kwadrat liczby
        for (int j = 3; j < cols; j++) {
            if (j == 3) {
                tablica[i][j] = i + j; // Czwarta kolumna: suma numeru wiersza i kolumny
            } else if (j == 4) {
                tablica[i][j] = i - j; // Piąta kolumna: różnica numeru wiersza i kolumny
            }
        }
    }

    // Wyświetlanie tablicy
    cout << "Tablica 10x10:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << tablica[i][j]; // Szerokość każdej komórki to 5 znaków
        }
        cout << endl;
    }

    getch(); // Czeka na wciśnięcie dowolnego klawisza przed zamknięciem programu
    return 0;
}
