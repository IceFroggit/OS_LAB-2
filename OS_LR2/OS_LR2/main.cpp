#include <iostream>
#include <Windows.h>

#include "GetInfoOfSystem.h"
#include "MemStatus.h"
#include "StateMem.h"
#include "ReservReg.h"
#include "DriveMem.h"
#include "RecordingData.h"
#include "AccessProtection.h"
#include "MemoryReturn.h"

using namespace std;

void info()
{
	cout << "Введите число для выбора пункта меню \n\n"
		<< "1 - получение информации о вычислительной системе \n"
		<< "2 - определение статуса виртуальной памяти \n"
		<< "3 - определение состояния конкретного участка памяти по заданному адресу \n"
		<< "4 - резервирование региона в автоматическом режиме и в режиме ввода адреса начала региона \n"
		<< "5 - резервирование региона и передача ему физической памяти в автоматическом режиме и в режиме ввода адреса начала региона \n"
		<< "6 - запись данных в ячейки памяти по заданным с клавиатуры адресам \n"
		<< "7 - установка защиты доступа для заданного (с клавиатуры) региона памяти и ее проверку \n"
		<< "8 - возврат физической памяти и освобождение региона адресного пространства заданного(с клавиатуры) региона памяти \n"
		<< endl;

}


int main()
{
	setlocale(LC_ALL, "Russian");
	info();
	CHAR ch = '9';

	while (ch != '0')
	{

		system("cls");
		info();
		cin >> ch;
		switch (ch)
		{
		case '1':
			GetInfoOfSystem();
			break;
		case '2':
			MemStatus();
			break;
		case '3':
			StateMem();
			break;
		case '4':
			ReservReg();
			break;
		case '5':
			DriveMem();
			break;
		case '6':
			RecordingData();
			break;
		case '7':
			AccessProtection();
			break;
		case '8':
			Return();
			break;
		case '0':
			break;
		default:
			cout << "Вы ввели несуществующий пункт меню" << endl;

			break;
		}

		system("pause");
	}

	return 0;
}

