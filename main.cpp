#include <iostream>

using namespace std;

int main() {
    double Podstawa = 1000;
    int wybor;
    int Ppin = 1234;
    int pin;
    int iloscProb = 3;


        while (iloscProb  > 0 ) {
            cout << "Proszę podać numer pin: " << endl;
            cin >> pin;
            if (pin == Ppin) {
                break;
            }else {
                cout << "Pin nie poprawny spróbuj ponownie!!" << endl;
                iloscProb = iloscProb - 1;
                cout << "ilosc prob to: " << iloscProb << endl;
                if (iloscProb == 0) {
                    cout << "Przekroczono ilosc prob!!! Brak dostępu!"<<endl;
                    return 0;
                }
            }
        }
        iloscProb = 3;
        cout<<" Pin poprawny witamy!!"<<endl;
        while (true) {
            cout << "---Wirtualny Bankomat---"<<endl;
            cout << "1.Sprawdz stan konta"<<endl;
            cout << "2.Wplać pieniądze"<<endl;
            cout << "3.Wypłać pieniądze"<<endl;
            cout << "4.Zmiana Pinu"<<endl;
            cout << "5.Wyjdź"<<endl;
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
                case 4: {
                    int Apin;
                    cout << "Podaj Aktualny pin: " << endl;
                    cin >> Apin;
                    if (Apin != Ppin) {
                        iloscProb = iloscProb -1;
                        if (iloscProb == 0) {
                            cout << "Przekroczono ilosc prób wpisania pinu !!!! Niepowodzenie!!" << endl;
                            return 0;
                        }
                        cout<<"Nie poprawny pin!! , Pozostalo  " <<  iloscProb << endl;
                    }else {
                        iloscProb = 3;
                        int NewPin;
                        int NewPin2;
                        cout << "Jaki Ma być nowy pin: "<< endl;
                        cin >> NewPin;
                        cout << "Powtórz nowy pin: " << endl;
                        cin >> NewPin2;
                        if (NewPin2 == Ppin) {
                            cout << "Uzyto tego samego pinu!!! ustaw inny pin niz podstawowy!!"<<endl;
                        }
                        else if (NewPin2 != NewPin) {
                            cout << "Ten pin nie pasuje do nadanego pini!! " << endl;

                        }else {

                            cout << "Udało się zmienić pin !!"<<endl;
                            Ppin = NewPin2;
                        }
                    }
                    break;
                }
                case 5:
                    return 0;
                default:
                    cout<< "Zły numer !! \nzakres (1-5) proszę wybrać ponownie z zakresu !"<<endl;


            }
        }
    }


