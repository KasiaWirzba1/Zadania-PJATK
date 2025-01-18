#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::string tekst;
    int n;

    std::cout << "Podaj tekst do konkatenacji: ";
    std::cin >> tekst;

    std::cout << "Podaj liczbę powtórzeń: ";
    std::cin >> n;

    std::string wynik;
    for (int i = 0; i < n; ++i) {
        wynik += tekst;
    }

    std::cout << "Wynik konkatenacji: " << wynik << "\n";

    return 0;
}