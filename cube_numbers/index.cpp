#include <iostream>
#include <cstdlib> 

using namespace std;


	int rzutKostka(){	
	    int liczba = rand() % 6 + 1;
	    return liczba;
	}
	
	int dodajRzut(int rzuty[], int liczbaRzutow) {
		int wynik = rzutKostka();
		rzuty[liczbaRzutow] = wynik;
		
		cout<<wynik<<endl;
		
		return liczbaRzutow + 1;
	}
	
	void wyswietlRzuty(int rzuty[], int liczbaRzutow) {
		for(int i = 0; i < liczbaRzutow; i++){
			cout<<rzuty[i]<<endl;
		}
	}
	
	void sumaOczek(int rzuty[], int liczbaRzutow) {
		int suma = 0;
		for(int i = 0; i < liczbaRzutow; i++){
			suma += rzuty[i];
		}
		cout<<suma<<endl;
	}
	
	void policzSzostki(int rzuty[], int liczbaRzutow) {
		int szostki = 0;
		for(int i = 0; i < liczbaRzutow; i++){
			if(rzuty[]){
				szostki++;
			}
		}
	}
	
	void najwiekszyRzut(int rzuty[], int liczbaRzutow) {
		
	}
	
 
int main(int argc, char** argv) {
	
	int a, nr_rzutu = 0;
	int rzuty[50];
	
	while(true){
		cout<<"1 - wykonaj rzut kostka"<<endl;
		cout<<"2 - wyswietl wszystkie rzuty"<<endl;
		cout<<"3 - oblicz sume oczek"<<endl;
		cout<<"4 - policz ile razy wypadla liczba 6"<<endl;
		cout<<"5 - znajdz najwiekszy rzut"<<endl;
		cout<<"6 - zakoncz program"<<endl;
	
	cin>>a;
	
if(a == 1){
	nr_rzutu = dodajRzut(rzuty, nr_rzutu);
} else if(a == 2){
	wyswietlRzuty(rzuty, nr_rzutu);
} else if(a == 3){
	sumaOczek(rzuty, nr_rzutu);
} else if(a == 4){
	dodajRzut(rzuty, nr_rzutu);
} else if(a == 5){
	dodajRzut(rzuty, nr_rzutu);
} else if(a == 6){
	return 0;
}
	
}


	return 0;
}