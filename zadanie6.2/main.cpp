#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

struct Student {
    std::string imie;
    int informatyka;
    int matematyka;
    int biologia;
    int jezyk_polski;
};

void wyswietlPrzedmioty() {
    std::cout << "\nPrzedmioty:\n";
    std::cout << "1. Informatyka\n";
    std::cout << "2. Matematyka\n";
    std::cout << "3. Biologia\n";
    std::cout << "4. Język Polski\n";
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<Student> uczniowie(6);
    int numerUcznia, numerPrzedmiotu;
    // Wczytywanie danych uczniów
    std::cout << "Wprowadz dane dla 6 uczniów.\n";
    for (int i = 0; i < 6; ++i) {
        std::cout << "\nUczeń " << i + 1 << "\n";
        std::cout << "Imię: ";
        std::cin >> uczniowie[i].imie;

        std::cout << "Ocena z informatyki: ";
        std::cin >> uczniowie[i].informatyka;
        std::cout << "Ocena z matematyki: ";
        std::cin >> uczniowie[i].matematyka;
        std::cout << "Ocena z biologii: ";
        std::cin >> uczniowie[i].biologia;
        std::cout << "Ocena z języka polskiego: ";
        std::cin >> uczniowie[i].jezyk_polski;
    }
    int n;
    std::cout << "Podaj liczbę zapytań: \n";
    std::cin >> n;
    for (int i = 1; i < n; i++) {
        std::cout << "\nPodaj numer ucznia (1-6): ";
        std::cin >> numerUcznia;
        if (numerUcznia < 1 || numerUcznia > 6) {
            std::cout << "Nieprawidłowy numer ucznia!\n";
            i=i-1;
        }

        // Pobieranie numeru przedmiotu
        wyswietlPrzedmioty();
        std::cout << "Podaj numer przedmiotu: ";
        std::cin >> numerPrzedmiotu;

        // Wyświetlanie oceny
        switch (numerPrzedmiotu) {
            case 1:
                std::cout << "\nUczeń " << uczniowie[numerUcznia - 1].imie
                          << " ma ocenę " << uczniowie[numerUcznia - 1].informatyka
                          << " z informatyki.\n";
            break;
            case 2:
                std::cout << "\nUczeń " << uczniowie[numerUcznia - 1].imie
                          << " ma ocenę " << uczniowie[numerUcznia - 1].matematyka
                          << " z matematyki.\n";
            break;
            case 3:
                std::cout << "\nUczeń " << uczniowie[numerUcznia - 1].imie
                          << " ma ocenę " << uczniowie[numerUcznia - 1].biologia
                          << " z biologii.\n";
            break;
            case 4:
                std::cout << "\nUczeń " << uczniowie[numerUcznia - 1].imie
                          << " ma ocenę " << uczniowie[numerUcznia - 1].jezyk_polski
                          << " z języka polskiego.\n";
            break;
            default:
                std::cout << "Nieprawidłowy numer przedmiotu!\n";
        }
    }
    return 0;
}
