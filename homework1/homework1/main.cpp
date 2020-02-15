/*
Bu ödevde for döngüsü ile girilen deðer kadar maximum yýldýzý olan piramit yýldýz, while döngüsü ile girilen deðer kadar maximum yýldýzý olan ters piramit yýldýz ve
recursive ile ekrana elmas bastýracaðým.

KEREM AKKOYUN
*/


#include "functions.h" //ne kadar doðru bilmiyorum ama functions.cpp'de de iostream kütüphanesine ihtiyacým olacaðý için bir kere header dosyasýnda kütüphaneyi çaðýrýp mainde de bunu kullandým

using namespace std;

int main()
{
	int select;//iþlemleri tutar
	int value;//girilecek deðerleri tutar


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