#include <iostream>
#include <fstream>
#include <string>
#include <locale>
using namespace std;

void main()
{
	ofstream dosyaYaz("test.txt",ios::app);
	string  id="ID";
	string ad = "ISIM";
	string soyad="SOYISIM";
	dosyaYaz << id <<" "<< ad<<" "<< soyad<<endl;
	int id2 = 11;
	string ad2 = "YILMAZ";
	string soyad2 = "ÞEN";
	dosyaYaz << id2 << " " << ad2 << " " << soyad2 << " "<< endl;
	dosyaYaz.close();
/*
	ifstream dosyaOku("veriler.txt");
	if (dosyaOku.is_open())
	{
		int id;
		string ad, soyad;
		char ch;
		while (!dosyaOku.eof())
		{
			
			dosyaOku >> id >> ad >> soyad >> ch;
		
			if (ch == '\n')
			{
				break;
			}

			cout << id << " " << ad << " " << soyad;
			cout << "\n";

			
			
		}
	}

*/
	system("pause");




}