#include <vector>
#include <list>
#include <iostream>
#include <cstdlib> //do randa
#include <ctime>//do time
#include <algorithm>//do sort
#include <functional> //do wykorzystania w greater
#include "Wektor2D.h"

using namespace std;

void main(void) {
	vector<int> tab;
	int d;
	int d2;
	int d3;
	srand(time(NULL));
	d = rand() % 100;
	d2 = rand() % 100;
	cout << "Podaj d3:" << endl;
	cin >> d3;
	cout << endl;

	tab.push_back(d);
	tab.push_back(d2);
	tab.push_back(d3);
	cout << "Rozmiar tablicy:" << endl;
	cout << tab.size() << endl << endl;

	cout << "Zawartosc tablicy:" << endl;
	vector<int>::iterator itr;
	for (itr = tab.begin(); itr != tab.end(); ++itr) cout << *itr << endl;
	cout << endl;

	cout << "Zawartosc tablicy od tylu:" << endl;
	vector<int>::reverse_iterator ritr;
	for (ritr = tab.rbegin(); ritr != tab.rend(); ++ritr) cout << *ritr << endl;
	cout << endl;

	cout << "Najwiekszy i najmniejszy element tablicy:" << endl;
	cout << *max_element(tab.begin(), tab.end()) << "\t" << *min_element(tab.begin(), tab.end()) << endl <<endl;

	cout << "Posortowana tablica:" << endl;
	sort(tab.begin(), tab.end());
	for (itr = tab.begin(); itr != tab.end(); ++itr) cout << *itr << endl;
	cout << endl;

	cout << "Posortowana odwrotnie tablica:" << endl;
	sort(tab.begin(), tab.end(), greater<int>());
	for (itr = tab.begin(); itr != tab.end(); ++itr) cout << *itr << endl;
	cout << endl;

	

	//Lista
	list<int> tab2;
	for (int i = 0; i < 10; i++) tab2.push_back(rand() % 100);

	cout << "Rozmiar listy:" << endl;
	cout << tab2.size() << endl << endl;

	cout << "Zawartosc listy:" << endl;
	list<int>::iterator itr2;
	for (itr2 = tab2.begin(); itr2 != tab2.end(); ++itr2) cout << *itr2 << endl;
	cout << endl;

	cout << "Zawartosc listy od tylu:" << endl;
	list<int>::reverse_iterator ritr2;
	for (ritr2 = tab2.rbegin(); ritr2 != tab2.rend(); ++ritr2) cout << *ritr2 << endl;
	cout << endl;

	cout << "Posortowana lista" << endl;
	tab2.sort();
	for (itr2 = tab2.begin(); itr2 != tab2.end(); ++itr2) cout << *itr2 << endl;
	cout << endl;

	int tab3[10];
	for (int i = 0; i < 10; i++) tab3[i]=rand() % 100;

	cout << "Zawartosc tablicy z C:" << endl;
	for (int i = 0; i < 10; i++) cout << tab3[i] << endl;
	cout << endl;

	cout << "Zawartosc tablicy z C po posortowaniu:" << endl;
	sort(tab3, tab3+10);
	for (int i = 0; i < 10; i++) cout << tab3[i] << endl;
	cout << endl;

	vector<Wektor2D> tab4;
	for (int i = 0; i < 10; i++) tab4.push_back(Wektor2D(((double)(rand() % 100)), ((double)(rand() % 100))));

	cout << "Zawartosc tablicy wektorow:" << endl;
	vector<Wektor2D> ::iterator itr4;
	for (itr4 = tab4.begin(); itr4 != tab4.end(); ++itr4) cout << *itr4 << endl;
	cout << endl;

	cout << "Posortowana tablica wektorow:" << endl;
	sort(tab4.begin(), tab4.end());
	for (itr4 = tab4.begin(); itr4 != tab4.end(); ++itr4) cout << *itr4 << endl;
	cout << endl;
}


