#include <iostream>
using namespace std;

// Funkcja kalkulacyjna
void kalkulator() {
    char operacja;
    double liczba1, liczba2, wynik;

    cout << "Witaj w kalkulatorze!\n";
    cout << "Wprowadź operację (+, -, *, /): ";
    cin >> operacja;

    cout << "Wprowadź pierwszą liczbę: ";
    cin >> liczba1;
    cout << "Wprowadź drugą liczbę: ";
    cin >> liczba2;

    switch (operacja) {
        case '+':
            wynik = liczba1 + liczba2;
            cout << "Wynik: " << wynik << endl;
            break;
        case '-':
            wynik = liczba1 - liczba2;
            cout << "Wynik: " << wynik << endl;
            break;
        case '*':
            wynik = liczba1 * liczba2;
            cout << "Wynik: " << wynik << endl;
            break;
        case '/':
            if (liczba2 != 0) {
                wynik = liczba1 / liczba2;
                cout << "Wynik: " << wynik << endl;
            } else {
                cout << "Błąd: Nie można dzielić przez zero!" << endl;
            }
            break;
        default:
            cout << "Błąd: Niepoprawna operacja!" << endl;
    }
}

int main() {
    char kontynuacja;

    do {
        kalkulator();
        cout << "Czy chcesz kontynuować? (t/n): ";
        cin >> kontynuacja;
    } while (kontynuacja == 't' || kontynuacja == 'T');

    cout << "Dziękuję za skorzystanie z kalkulatora!" << endl;
    return 0;
}
