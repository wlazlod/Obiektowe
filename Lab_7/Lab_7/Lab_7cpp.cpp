#include <iostream>
#include <string>
#include <vector>
#include <algorithm>//do sort
#include <functional> //do wykorzystania w greater

using namespace std;

class Record {
public:
	Record() {}
	Record(const char c[]) : mName(c) {}
	string	mName;
	string	mPhone;
	int		mAge;

};

bool operator > (const Record &r1, const Record &r2)
{
	return r1.mName>r2.mName;
}

bool operator < (const Record &r1, const Record &r2)
{
	return r1.mName>r2.mName;
}

bool operator == (const Record &r1, const Record &r2)
{
	return r1.mName==r2.mName;
}

ostream& operator<<(ostream& o, const Record& r) {
	o.setf(ios::fixed);
	o << "Record: ";
	o << r.mName;
	return o;
};

class PrintR {
public:
	void operator () (const Record& r)
	{
		cout << r << endl;
	}
};


/*class PrintF {
public:
	void operator () (const Record& r)
	{
		
		ofstream fout("a.txt");
		fout << r << endl;
	}
};*/


void main(void) {
	vector<Record> tab;
	tab.push_back("Nowak");
	tab.push_back("Kowalski");
	tab.push_back("Nowakowski");
	tab.push_back("Nowak");
	tab.push_back("Neska");

	vector<Record>::iterator itr;
	for (itr = tab.begin(); itr != tab.end(); ++itr) cout << *itr << endl;
	cout << endl;
	
	vector<Record> tab2;
	for (itr = tab.begin(); itr != tab.end(); ++itr) tab2.push_back("");
	copy(tab.begin(), tab.end(), tab2.begin());
	for (itr = tab2.begin(); itr != tab2.end(); ++itr) cout << *itr << endl;
	cout << endl;
	
	for_each(tab.begin(), tab.end(), PrintR());
	cout << endl;

	sort(tab2.begin(), tab2.end());
	for_each(tab2.begin(), tab2.end(), PrintR());
	cout << endl;

	Record wzor("Nowak");
	pair<vector<Record>::iterator, vector<Record>::iterator> range=equal_range(tab2.begin(), tab2.end(), wzor);
	for (itr = range.first; itr != range.second; ++itr) cout << *itr << endl;
	cout << endl;

	vector<Record>::iterator low = lower_bound(tab2.begin(), tab2.end(), wzor);
	for (itr = tab2.begin(); itr != low; ++itr) cout << *itr << endl;
	cout << endl;

	vector<Record> t;
	t.push_back("Nowak");
	t.push_back("Kowalski");
	t.push_back("Nowakowski");
	t.push_back("Nowak");
	t.push_back("Neska");
	for_each(t.begin(), t.end(), [](const Record &r) {cout << r <<endl;}); //lambda expression [](atrybuty){cia³o}; <- funkcja anoniemowa
}
