#include <iostream>

using namespace std;

int main() {
    double Podstawa = 1000;
    int wybor;
    while (true) {
    cout << "---Wirtualny Bankomat---"<<endl;
    cout << "1.Sprawdz stan konta"<<endl;
    cout << "2.Wplać pieniądze"<<endl;
    cout << "3.Wypłać pieniądze"<<endl;
    cout << "4.Wyjdź"<<endl;
    cin >> wybor;

        switch (wybor) {
            case 1:
                cout<< "Aktualny stan konta: " << Podstawa << " zł" << endl;
                break;
            case 2: {
                double kwota;
                cout << "Jaka kwote chcesz wplacic?"<<endl;
                cin >> kwota;
                if (kwota <= 0 ) {
                    cout << "Wplac kwote wieksza od zera!!!"<<endl;
                }else {
                    Podstawa = kwota + Podstawa;
                    cout << "Dodano " << kwota << " zł" << " do portfela!" << endl;
                    cout << "Aktualne saldo " << Podstawa << " zł" << endl;
                }
                break;
            }

            case 3: {
                double wyplata;
                cout << "Jaką kwotę chcesz wyplacić?? " << endl;
                cin >> wyplata;
                if (wyplata <= 0) {
                    cout << " Nie da się wyplacić kwoty mniejszej od 0 lub jej równej!! "<< "\n Spróbuj Ponownie!!" << endl;
                }else if (wyplata > Podstawa) {
                    cout<< "Brak wystarczającej ilości środków!! aktualne saldo to: " << Podstawa << " zł" << endl;
                }
                else {
                    Podstawa = Podstawa - wyplata;
                    cout << "Wypłata zlecona! Aktualne saldo po wypłacie to: "<< Podstawa << " zł" << endl;
                }
                break;
            }
            case 4:
                return 0;
                default:
                cout<< "Zły numer !! \nzakres (1-4) proszę wybrać ponownie z zakresu !"<<endl;


        }
    }
}