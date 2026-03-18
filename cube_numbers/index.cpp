#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int rzutKostka() {   
    return rand() % 6 + 1;
}

int dodajRzut(int rzuty[], int liczbaRzutow) {
    if (liczbaRzutow >= 50) {
        cout << "Brak miejsca na kolejne rzuty!" << endl;
        return liczbaRzutow;
    }
    int wynik = rzutKostka();
    rzuty[liczbaRzutow] = wynik;
    cout << "Wylosowano: " << wynik << endl;
    return liczbaRzutow + 1;
}

void wyswietlRzuty(int rzuty[], int liczbaRzutow) {
    cout << "Historia rzutow: ";
    for(int i = 0; i < liczbaRzutow; i++) {
        cout << rzuty[i] << " ";
    }
    cout << endl;
}

void sumaOczek(int rzuty[], int liczbaRzutow) {
    int suma = 0;
    for(int i = 0; i < liczbaRzutow; i++) {
        suma += rzuty[i];
    }
    cout << "Suma oczek: " << suma << endl;
}

void policzSzostki(int rzuty[], int liczbaRzutow) {
    int licznik = 0;
    for(int i = 0; i < liczbaRzutow; i++) {
        if(rzuty[i] == 6) {
            licznik++;
        }
    }
    cout << "Liczba szostek: " << licznik << endl;
}

void najwiekszyRzut(int rzuty[], int liczbaRzutow) {
    if(liczbaRzutow == 0) {
        cout << "Nie wykonano jeszcze zadnego rzutu." << endl;
        return;
    }
    int maxRzut = rzuty[0];
    for(int i = 1; i < liczbaRzutow; i++) {
        if(rzuty[i] > maxRzut) {
            maxRzut = rzuty[i];
        }
    }
    cout << "Najwiekszy rzut: " << maxRzut << endl;
}

int main(int argc, char** argv) {
    srand(time(0));
    
    int a, nr_rzutu = 0;
    int rzuty[50];
    
    while(true) {
        cout << "\n1 - wykonaj rzut kostka" << endl;
        cout << "2 - wyswietl wszystkie rzuty" << endl;
        cout << "3 - oblicz sume oczek" << endl;
        cout << "4 - policz ile razy wypadla liczba 6" << endl;
        cout << "5 - znajdz najwiekszy rzut" << endl;
        cout << "6 - zakoncz program" << endl;
        cout << "Wybor: ";
        
        cin >> a;
        
        if(a == 1) {
            nr_rzutu = dodajRzut(rzuty, nr_rzutu);
        } else if(a == 2) {
            wyswietlRzuty(rzuty, nr_rzutu);
        } else if(a == 3) {
            sumaOczek(rzuty, nr_rzutu);
        } else if(a == 4) {
            policzSzostki(rzuty, nr_rzutu);
        } else if(a == 5) {
            najwiekszyRzut(rzuty, nr_rzutu);
        } else if(a == 6) {
            break;
        } else {
            cout << "Niepoprawny wybor!" << endl;
        }
    }

    return 0;
}