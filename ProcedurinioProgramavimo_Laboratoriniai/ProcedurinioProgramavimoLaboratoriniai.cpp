#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
int main()
{
	string a, b;
	cout << "pasirinkite darba" << endl;
	cout << "   Procedurinio programavimo Laboratorinis 1                    - pp1" << endl;
	cout << "   Procedurinio programavimo Laboratorinis 2                    - pp2" << endl;
	cout << "   Procedurinio programavimo Laboratorinis 3                    - pp3" << endl;
	cout << "   Baigti darba                                                 - bet kas kita" << endl;
	cin >> a;
	system("cls");
	if (a == "pp1") {
		cout << "Sveiki atvyke i pirma Juliaus laboratorini" << endl;
		cout << "Kuri uzdavini norite paleisti? (Rinktis nuo 1 iki 20, arba 181 (18uz iter 1))" << endl;
		cin >> b;
		system("cls");
		if (b == "1") {
			Lab1_Problem_1();
		}
		else if (b == "2") {
		}
		else if (b == "3") {
		}
		else if (b == "4") {
		}
		else if (b == "5") {
		}
		else if (b == "6") {
			cout << "Sito uzdavinio nera" << endl;
		}
		else if (b == "7") {
		}
		else if (b == "8") {
		}
		else if (b == "9") {
		}
		else if (b == "10") {
		}
		else if (b == "11") {
		}
		else if (b == "12") {
		}
		else if (b == "13") {
		}
		else if (b == "14") {
		}
		else if (b == "15") {
		}
		else if (b == "16") {
		}
		else if (b == "17") {
		}
		else if (b == "18") {
		}
		else if (b == "19") {
		}
		else if (b == "20") {
		}
		else if (b == "181") {
		}
		else {
			cout << "end" << endl;
			//
		}
	}
	else if (a == "pp2") {
		if (b == "1") {
		}
		else {
			cout << "end" << endl;
			//
		}
	}
	else if (a == "pp3") {
	}
	else {
		return 0;//pabaiga
	}
	system("pause");
	main();
}