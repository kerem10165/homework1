/*
Bu �devde for d�ng�s� ile girilen de�er kadar maximum y�ld�z� olan piramit y�ld�z, while d�ng�s� ile girilen de�er kadar maximum y�ld�z� olan ters piramit y�ld�z ve
recursive ile ekrana elmas bast�raca��m.

KEREM AKKOYUN
*/


#include "functions.h" //ne kadar do�ru bilmiyorum ama functions.cpp'de de iostream k�t�phanesine ihtiyac�m olaca�� i�in bir kere header dosyas�nda k�t�phaneyi �a��r�p mainde de bunu kulland�m

using namespace std;

int main()
{
	int select;//i�lemleri tutar
	int value;//girilecek de�erleri tutar


	cout << "Lutfen 0-3 arasinda deger giriniz, 1 = Duz ucgen, 2 = Ters ucgen, 3 = ekrana Elmas basar, 0 = Cikis: ";
	cin >> select;

	if (select == 1)
	{
		cout << endl << "3-15 araliginda gecerli bir tek sayi degeri giriniz: ";
		cin >> value;
		duzUcgen(value);
	}
	
	if (select == 2)
	{
		cout << endl << "3-15 araliginda gecerli bir tek sayi degeri giriniz: ";
		cin >> value;
		tersUcgen(value);
	}
	
	if (select == 3)
	{
		cout << endl << "5-15 araliginda gecerli bir tek sayi degeri giriniz: ";
		cin >> value;
		elmas(value,3);
	}

}