#include <iostream>
using namespace std;

int main() {
    char znak;

    cout << "Podawaj znaki. Program zakończy działanie po wprowadzeniu znaku 't'.\n";

    do {
        cin >> znak;
        cout << "Wprowadzono znak: " << znak << endl;
    } while (znak != 't');

    cout << "Program zakończony po wprowadzeniu znaku 't'." << endl;

    return 0;
}