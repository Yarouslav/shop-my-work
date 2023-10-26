#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
int balance;
int банани;
int мандарини;
int абрикоси;
int яблука;
int кількість_бананів;
int вираховування_ціни;
int решта;
int нестача;


int main() {
	setlocale(LC_CTYPE, "ukr");
	int банани = 24;
	int мандарини = 35;
	int абрикоси = 28;
	int яблука = 30;
	int кількість_яблук;
	int кількість_мандарини;
	int кількість_абрикосів;
	int кількість_бананів = 1;
	int повна_ціна;
	cout << "Введiть баланс - "; cin >> balance;
	cout << "Ваш баланс = " << balance << " гривень" << endl;
	cout << "__________________________________" << endl;
	cout << "Продавець: Що бажаєте придбати?" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "Ви: Покажiть ваш асортимент, будь ласка." << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "Продавець: |Банани - 24 гривнi| \t  |Яблука - 30 гривень| \t |Абрикоси - 28 гривень| \t |Мандарини - 35 гривень| ";
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "Ви: Дайте один банан, будь ласка." << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "Продавець: Може ще щось? " << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "Ви: Добре!" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "Кiлькiсть яблук = "; cin >> кількість_яблук;
	cout << "Кiлькiсть абрикосiв = "; cin >> кількість_абрикосів;
	cout << "Кiлькiсть мандаринiв = "; cin >> кількість_мандарини;
	повна_ціна = (кількість_яблук * 30) + (кількість_абрикосів * 28) + (кількість_мандарини * 35) + 24;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "цiна = " << повна_ціна << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	if (balance > повна_ціна) 
		cout << "Ви: Ось тримайте грошi!" << endl;
	else
		if (balance < повна_ціна) {
			cout << "Продавець: Вам не вистарчає грошей!" << endl;
			нестача = повна_ціна - balance;
			cout << "Нестача = " << нестача << endl;
			exit(0);
		}
	решта = balance - повна_ціна;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "Продавець: Ваша решта - " << решта << endl;	
}