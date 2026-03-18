#include <iostream>

using namespace std;

int dodajOcene(int tab[], int licznik) {
    int ocena = 0;
    cout << "Podaj ocene: " << endl;
    cin >> ocena;

    if (ocena > 6 || ocena < 1) {
        cout << "BŁĄD! Podaj ocene od 1 do 6" << endl;
        return licznik;
    } else {
        tab[licznik] = ocena;
        cout << "Dodano!" << endl;
        return licznik + 1;
    }
}

void pokazOceny(int tab[], int licznik) {
    if (licznik == 0) {
        cout << "Brak ocen do wyswietlenia." << endl;
        return;
    }
    cout << "Twoje oceny: ";
    for (int i{}; i < licznik; i++) {
        cout << tab[i] << ", ";
    }
    cout << endl;
}

float obliczSrednia(int tab[], int licznik) {
    if (licznik == 0) return 0; 
    float suma{};
    for (int i{}; i < licznik; i++) {
        suma += tab[i];
    }
    return suma / licznik;
}

void znajdzZagrozenie(int tab[], int licznik) {
    int jeden{};

    for(int i{}; i < licznik; i++) {
        if(tab[i] == 1) {
            cout<<"masz zagrozenie";
            return;
        }
    }
    cout<<"nie masz zagrozenia";
}

void najwyzszaInajnizsza(int tab[], int licznik) {
    int max = tab[0];
    int min = tab[0];

    for(int i{}; i < licznik; i++) {
        if(tab[i] > max) {
            max = tab[i];
        }

        if(tab[i] < min) {
             min = tab[i];
        }
    }

    cout<<max<<", ";
    cout<<min;
}

int main() {
    int oceny[20];
    int ileOcen = 0;
    int wybor;

    while (true) {
        cout << "\n--- MENU ---" << endl;
        cout << "1 - Dodaj ocene" << endl;
        cout << "2 - Pokaz oceny" << endl;
        cout << "3 - Oblicz srednia" << endl;
        cout << "4 - Czy masz zagrozenie" << endl;
        cout << "5 - Wypisz najmniejsza i najwieksza liczbe" << endl;
        cout << "6 - Zakoncz program" << endl;
        cout << "Wybor: ";
        cin >> wybor;

        if (wybor == 1) {
            ileOcen = dodajOcene(oceny, ileOcen); 
        } 

        else if (wybor == 2) {
            pokazOceny(oceny, ileOcen);
        }

        else if (wybor == 3) {
            float wynik = obliczSrednia(oceny, ileOcen);
            cout << "Srednia wynosi: " << wynik << endl;
        }

        else if(wybor == 4) {
            znajdzZagrozenie(oceny, ileOcen);
        }

        else if(wybor == 5) {
            najwyzszaInajnizsza(oceny, ileOcen);
        }

        else if (wybor == 6) {
            cout << "Do widzenia!" << endl;
            return 0;
        }
    }
}