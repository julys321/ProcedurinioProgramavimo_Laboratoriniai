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
			cout << "----SALYGA----" << endl;
			cout << "Atspausdinkite zodi 'Laboratorinis'." << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_1();
		}
		else if (b == "2") {
			cout << "----SALYGA----" << endl;
			cout << "Duotos staciakampio krastines a ir b. Raskite staciakampio perimetra." << endl;
			cout << "----INPUT----" << endl;
			cout << "Du sveiki skaiciai a ir b (0 < a, b =< 106)." << endl;
			cout << "----OUTPUT----" << endl;
			cout << "Isveskite perimetra." << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_2();
		}
		else if (b == "3") {
			cout << "----SALYGA----" << endl;
			cout << "Programuotojas gavo a euru atlyginima. Po metu buvo nuspresta jam pakelti atlyginima. Dabar jo alga yra b euru. Apskaiciuokite, keliais procentais buvo pakelta alga." << endl;
			cout << "----INPUT----" << endl;
			cout << "Du sveiki skaiciai a ir b (10 =< a =< 1000, a =< b =< 2500)." << endl;
			cout << "----OUTPUT----" << endl;
			cout << "Isvedamas vienas realus skaičus su 2 zenklais po kablelio." << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_3();
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
	system("cls");
	main();
}