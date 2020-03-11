#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	ifstream fileSaya;
	string Keluaran, Penyangga, Nama;
	bool isData = false;
	int Nomor;

	fileSaya.open("FileContoh.txt");

	while (!isData)
	{
		getline(fileSaya, Penyangga);
		Keluaran.append("\n" + Penyangga);

		if (Penyangga == "Data")
		{
			isData = true;
		}
	}

	cout << Keluaran << endl;

	getline(fileSaya, Penyangga);
	cout << Penyangga << endl;

	int jumlahData = 0;

	while (!fileSaya.eof())
	{
		fileSaya >> Nomor;
		fileSaya >> Nama;

		cout << Nomor << "   " << Nama << endl;
		jumlahData++;
	}

	cout << "\nJumlah Data  = " << jumlahData << endl;

	_getch();
	return 0;
}