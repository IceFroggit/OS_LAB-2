#include <iostream>
#include<windows.h>
#include<string>

using namespace std;

void Reader()
{
	setlocale(LC_ALL, "Russian");
	string fileName; 
	HANDLE HandleMap; 
	LPVOID Memory; 
	cout << "Введите имя файла: ";
	cin >> fileName;
	HandleMap = OpenFileMappingA(FILE_MAP_READ | FILE_MAP_WRITE, FALSE, fileName.c_str());
	Memory = MapViewOfFile(HandleMap, FILE_MAP_ALL_ACCESS, 0, 0, 0);//проецирование фрагмента файла в память
	if (Memory)
	{
		cout << "Содержимое файла " << endl;
		cout << (char*)Memory << endl;
		cout << "Для завершения введите любой символ: ";
		cin >> fileName;
		UnmapViewOfFile(Memory); //завершение проецирования файла
	}
	else
	{
		cout << "Ошибка указан не верный путь или файл не существует";
	}
}

int main()
{
	Reader();
	return 0;
}