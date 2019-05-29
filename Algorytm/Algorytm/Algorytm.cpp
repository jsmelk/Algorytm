#include "pch.h"
#include <iostream>

using namespace std;
//0,7 dla mężczyzn i 0,6 dla kobiet
int licz_max_alkohol(double waga, double wspolczynnik, int promil, double a)
{
	a = (waga*promil*wspolczynnik);
	cout << a;
	return a;
}
int main()
{
	double waga = 0;
	int opcje = 0;
	int opcje_wejsciowe = 0;
	int opcje_algorytmu;
	char plec = '0';
	int wydarzenie = 0;
	int koniec = 1;
	int algorytm = 0;
	int promil = 4;
	int srodki = 0;
	int priorytet = 0;
	double ilosc_max_alkohol = 0;
	double ilosc_max_alkohol_w = 0;
	double wspolczynnik = 0;
	while (koniec == 1)
	{
		cout << "wybierz opcje:\n1 opcje personalne\n2 opcje algorytmu\n3 sprawdz dane\n4 koniec\n";
		cin >> opcje;
		switch (opcje)
		{
		case 1:
			cout << "wybierz opcje:\n1 wybierz plec\n2 dodaj wage\n3 dodaj srodki\n4 koniec\n";
			cin >> opcje_wejsciowe;
			switch (opcje_wejsciowe)
			{
			case 1:
				cout << "wybierz m lub k\n";
				cin >> plec;
				if (plec == 'm')
				{
					wspolczynnik = 0.7;
				}
				if (plec == 'k')
				{
					wspolczynnik = 0.6;
				}
				break;
			case 2:
				cout << "podaj wage\n";
				cin >> waga;
				break;
			case 3:
				cout << "podaj srodki\n";
				cin >> srodki;
				break;
			case 4:
				koniec = 3;
				break;
			}
			break;
		case 2:
			cout << "wybierz opcje:\n1 wydarzenie\n2 wybierz algorytm\n3 ustaw priorytet\n4 koniec\n";
			cin >> opcje_algorytmu;
			switch (opcje_algorytmu)
			{
			case 1:
				cout << "wybierz wydarzenie\n1 - randka 1\n2 - domowka 2\n3 - urodziny 3\n4 koniec\n";
				cin >> wydarzenie;
				switch (wydarzenie)
				{
					ilosc_max_alkohol = licz_max_alkohol(waga, wspolczynnik, promil, ilosc_max_alkohol);
				case 1:
					ilosc_max_alkohol_w = (ilosc_max_alkohol*0.5);
					break;
				case 2:
					ilosc_max_alkohol_w = (ilosc_max_alkohol);
					break;
				case 3:
					ilosc_max_alkohol_w = (ilosc_max_alkohol*0.625);
					break;
				}
				break;
			case 2:
				cout << "wybierz algorytm:\n1 - zachlanny 1\n2 - brute force 2\n3 - heurystyczny 3\n4 koniec\n";
				cin >> algorytm;
				switch (algorytm)
				{
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				}
				break;
			case 3:
				cout << "wybierz priorytet:\n1 - ilosc alkoholu\n2 - ilosc pieniedzyk\n";
				cin >> priorytet;
				if (priorytet != 1 && priorytet != 2)
				{
					cout << "zly wybor wybierz priorytet:\n1 - ilosc alkoholu\n2 - jakos alkoholu\n";
					cin >> priorytet;
				}
				break;
			case 4:
				koniec = 3;
				break;
			}
			break;
		case 3:
			ilosc_max_alkohol = licz_max_alkohol(waga, wspolczynnik, promil, ilosc_max_alkohol);
			cout << "twoja plec: "; cout << plec; cout << "\n";
			cout << "twoja waga: "; cout << waga; cout << "\n";
			cout << "twoje wydarzenie: "; cout << wydarzenie; cout << "\n";
			cout << "twoj algolrytm: "; cout << algorytm; cout << "\n";
			cout << "twoje srodki: "; cout << srodki; cout << "\n";
			cout << "twoj priorytet: "; cout << priorytet; cout << "\n";
			cout << "twoja maksymalna ilosc alkoholu: "; cout << ilosc_max_alkohol; cout << "\n";
			cout << "twoja maksymalna ilosc alkoholu w wydarzeniu: "; cout << ilosc_max_alkohol_w; cout << "\n";
			break;
		case 4:
			koniec = 3;
			break;
		}


	}
	return 0;
}

