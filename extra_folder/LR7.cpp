#include <fstream>
#include <iostream>
#include "H7.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char rdbf[50];
	ifstream fin("inpt.txt");
	ofstream fout("outpt.txt");
	if (!fin.is_open() || !fout.is_open())
	{
		cout << "Файл не найден, не существует или его невозможно открыть\n";
		exit(0);
	}
	else
	{
		while (true)
		{
			fin >> rdbf;
			rdbf[0] = swtcs(rdbf[0]);
			if (fin.fail()) break;
			fout << rdbf << ' ';
		}
		fin.close();
		fout.close();
	}
	return 0;
}