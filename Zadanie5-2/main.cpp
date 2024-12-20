#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int rows, cols;
    cout << "Podaj liczbe wierszy: ";
    cin >> rows;
    cout << "Podaj liczbe kolumn: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Rozmiary tablicy musza byc wieksze od zera" << endl;
        return 1;
    }

    vector<vector<int>> tablica(rows, vector<int>(cols));
    cout << "Podaj elementy tablicy (" << rows * cols << " liczb):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> tablica[i][j];
        }
    }
    cout << "Tablica wejsciowa:" << endl;
    for (const auto &row : tablica) {
        for (const auto &elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols / 2; ++j) {
            swap(tablica[i][j], tablica[i][cols - 1 - j]);
        }
    }

    cout << "Tablica wyjsciowa:" << endl;
    for (const auto &row : tablica) {
        for (const auto &elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
