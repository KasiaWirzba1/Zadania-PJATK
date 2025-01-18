#include <iostream>
using namespace std;

int main() {
    int miesiac;

    cout << "Podaj numer miesiaca (1-12): ";
    cin >> miesiac;

    if (miesiac < 1 || miesiac > 12) {
        cout << "Nieprawidlowy numer miesiaca. Program konczy dzialanie." << endl;
        return 0;
    }


    string nazwaMiesiaca;
    switch (miesiac) {
    case 1: nazwaMiesiaca = "Styczen"; break;
    case 2: nazwaMiesiaca = "Luty"; break;
    case 3: nazwaMiesiaca = "Marzec"; break;
    case 4: nazwaMiesiaca = "Kwiecien"; break;
    case 5: nazwaMiesiaca = "Maj"; break;
    case 6: nazwaMiesiaca = "Czerwiec"; break;
    case 7: nazwaMiesiaca = "Lipiec"; break;
    case 8: nazwaMiesiaca = "Sierpien"; break;
    case 9: nazwaMiesiaca = "Wrzesien"; break;
    case 10: nazwaMiesiaca = "Pazdziernik"; break;
    case 11: nazwaMiesiaca = "Listopad"; break;
    case 12: nazwaMiesiaca = "Grudzien"; break;
    }

    cout << "Miesiac: " << nazwaMiesiaca << endl;

    int dniWMiesiacu;
    switch (miesiac) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        dniWMiesiacu = 31; break;
    case 4: case 6: case 9: case 11:
        dniWMiesiacu = 30; break;
    case 2:
        dniWMiesiacu = 28; break;
    }

    cout << "Liczba dni w miesiacu: " << dniWMiesiacu << endl;

    if (miesiac >= 4 && miesiac <= 9) {
        cout << "W tym miesiacu jest slonecznie." << endl;
    }
    else {
        cout << "W tym miesiacu jest pochmurno." << endl;
    }

    return 0;
}