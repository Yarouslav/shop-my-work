#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
#include <string>
#include <thread>
#include <chrono>

using namespace std;
int balance;
int ������;
int ���������;
int ��������;
int ������;
int �������_������;
int �������������_����;
int �����;
int �������;


int main() {
	setlocale(LC_CTYPE, "ukr");
	int ������ = 24;
	int ��������� = 35;
	int �������� = 28;
	int ������ = 30;
	int �������_�����;
	int �������_���������;
	int �������_��������;
	int �������_������ = 1;
	int �����_����;
	cout << "����i�� ������ - "; cin >> balance;
	cout << "��� ������ = " << balance << " �������" << endl;
	cout << "__________________________________" << endl;
	cout << "���������: �� ������ ��������?" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "��: �����i�� ��� ����������, ���� �����." << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "���������: |������ - 24 �����i| \t  |������ - 30 �������| \t |�������� - 28 �������| \t |��������� - 35 �������| ";
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "��: ����� ���� �����, ���� �����." << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "���������: ���� �� ����? " << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "��: �����!" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "�i���i��� ����� = "; cin >> �������_�����;
	cout << "�i���i��� �������i� = "; cin >> �������_��������;
	cout << "�i���i��� ��������i� = "; cin >> �������_���������;
	�����_���� = (�������_����� * 30) + (�������_�������� * 28) + (�������_��������� * 35) + 24;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "�i�� = " << �����_���� << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	if (balance > �����_����) 
		cout << "��: ��� �������� ����i!" << endl;
	else
		if (balance < �����_����) {
			cout << "���������: ��� �� �������� ������!" << endl;
			������� = �����_���� - balance;
			cout << "������� = " << ������� << endl;
			exit(0);
		}
	����� = balance - �����_����;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "���������: ���� ����� - " << ����� << endl;	
}