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
			cout << "Du sveiki skaiciai a ir b (0 < a, b =< 10^6)." << endl;
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
			cout << "----SALYGA----" << endl;
			cout << "Apskaiciuokite funkcijos reiksme: x= (b+sqrt(b^2-(a*c)))/(2*a)" << endl;
			cout << "----INPUT----" << endl;
			cout << "Trys sveiki skaiciai a, b ir c (-10^6 =< a, b, c =< 10^6, ac =< b2 ir a != 0)." << endl;
			cout << "----OUTPUT----" << endl;
			cout << "isvedamas realaus tipo skaicius, triju skaitmenu po kablelio tikslumu." << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_4();
		}
		else if (b == "5") {
			cout << "----SALYGA----" << endl;
			cout << "Apskaiciuokite sia funkcija x= 2*sin(a) + (cos(b) - sqrt(tan(b)) * (log10(a)^5) kai duotos a ir b reikšmės \n Atsakymas apvalinamas simtuju tikslumu. Uztikriname, kad tan b >= 0. " << endl;
			cout << "----INPUT----" << endl;
			cout << "ivedami du realiojo tipo skaiciai a ir b ( 0 <= a, b <= 2pi)" << endl;
			cout << "----OUTPUT----" << endl;
			cout << "isvedamas vienas realiojo tipo skaicius. " << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_5();
		}
		else if (b == "6") {
			cout << "----SALYGA----" << endl;
			cout << "Apskaiciuokite funkcijos reiksme, kai zinoma x reiksme: (5x^3+sin^2(e^3x-16x^2))/(((sin(4x)/(cos(4x)+1))+0!)" << endl;
			cout << "----INPUT----" << endl;
			cout << "vienas naturalus skaicius x (1 <= x <= 100)." << endl;
			cout << "----OUTPUT----" << endl;
			cout << "isvedamas realaus tipo skaicius, dvieju skaitmenu po kablelio tikslumu." << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_6();
		}
		else if (b == "7") {
			cout << "----SALYGA----" << endl;
			cout << "Duotos atkarpos galu koordinates. Apskaiciuokite atkarpos ilgi." << endl;
			cout << "----INPUT----" << endl;
			cout << "Keturi sveiki skaiciai x1, y1, x2, y2 (-10^6 <= x1, y1, x2, y2 <= 10^6)." << endl;
			cout << "----OUTPUT----" << endl;
			cout << "isvedamas realaus tipo skaicius, dvieju skaitmenu po kablelio tikslumu." << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_7();
		}
		else if (b == "8") {
			cout << "----SALYGA----" << endl;
			cout << "Duotos trikampio virsuniu koordinates. Apskaiciuokite trikampio plota." << endl;
			cout << "----INPUT----" << endl;
			cout << "sesi sveiki skaiciai x1, y1, x2, y2, x3, y3 (-10^6 <= x1, y1, x2, y2, x3, y3 <= 10^6)." << endl;
			cout << "----OUTPUT----" << endl;
			cout << "isvedamas realaus tipo skaicius, vieno skaitmens po kablelio tikslumu." << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_8();
		}
		else if (b == "9") {
			cout << "----SALYGA----" << endl;
			cout << "Duotos staciakampio krastines. Raskite i staciakampi ibrezto apskritimo plota." << endl;
			cout << "----INPUT----" << endl;
			cout << "du sveiki skaiciai a ir b (0 < a, b <= 10^6)." << endl;
			cout << "----OUTPUT----" << endl;
			cout << "isvesti apskritimo plota, suapvalinus iki dvieju skaiciu po kablelio." << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_9();
		}
		else if (b == "10") {
			cout << "----SALYGA----" << endl;
			cout << "skaiciuja turi 1 - ritinys 2 - kugis" << endl;
			cout << "----INPUT----" << endl;
			cout << "sveikojo tipo skaiciai: p h r , kai p 1 arba 2, h aukstis, r spindulys (1 <= r 40, 1 <= h <= 200)." << endl;
			cout << "----OUTPUT----" << endl;
			cout << "realiojo tipo skaicius, du skaiciai po kalblelio - pasirinktos figuros turis" << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_10();
		}
		else if (b == "11") {
			cout << "----SALYGA----" << endl;
			cout << "Duoti kvadratines lygties koeficientai a,b,c. Raskite lygties sprendinius." << endl;
			cout << "----INPUT----" << endl;
			cout << "Trys sveiki skaiciai a, b ir c (-10^6 <= a, b, c <= 10^6)." << endl;
			cout << "----OUTPUT----" << endl;
			cout << "jei yra du sprendiniai, pirmiau rasome mazesni. Sprendiniai atskiriami simboliu '_'. Jei lygtis sprendiniu neturi, isvedame 'NO'." << endl;
			cout << "---------------------------------------------------" << endl;
			Lab1_Problem_11();
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