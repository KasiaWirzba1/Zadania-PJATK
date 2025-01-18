#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <windows.h>
struct Student {
    std::string imie;
    std::string nazwisko;
    int numer_indeksu;
};

bool compareByIndex(const Student& a, const Student& b) {
    return a.numer_indeksu < b.numer_indeksu;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::vector<Student> studenci;

    // Dodawanie studentów
    int liczba_studentow;
    std::cout << "Podaj liczbę studentów: ";
    std::cin >> liczba_studentow;

    for (int i = 0; i < liczba_studentow; ++i) {
        Student s;
        std::cout << "\nStudent " << i + 1 << ":\n";
        std::cout << "Imię: ";
        std::cin >> s.imie;
        std::cout << "Nazwisko: ";
        std::cin >> s.nazwisko;
        std::cout << "Numer indeksu: ";
        std::cin >> s.numer_indeksu;
        studenci.push_back(s);
    }

    // Sortowanie według numeru indeksu
    std::sort(studenci.begin(), studenci.end(), compareByIndex);

    // Wyświetlanie posortowanej listy
    std::cout << "\nLista studentów posortowana według numerów indeksów:\n";
    for (const auto& student : studenci) {
        std::cout << "Imię: " << student.imie
                  << ", Nazwisko: " << student.nazwisko
                  << ", Numer indeksu: " << student.numer_indeksu << "\n";
    }

    return 0;
}
