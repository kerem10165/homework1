#include "functions.h"



void duzUcgen(int deger)
{
	for (int i = 0; i < 3; i++)
	{
		if ((deger >= 3 && deger <= 15) && deger % 2 == 1)
		{
			std::cout << std::endl;
			int step = (deger + 1) / 2;
			int star = 1;
			int space = step - 1;
			for (int i = 0; i < step; i++)
			{
				for (int i = 0; i < space; i++)
				{
					std::cout << " ";
				}
				for (int i = 0; i < star; i++)
				{
					std::cout << "*";
				}
				std::cout << std::endl;
				star += 2;
				space--;

			}
			return;
		}

		else
		{
			std::cout << std::endl << "Hatali giris yaptiniz lutfen bir daha 3-15 aralginda gecerli bir tek sayi degeri giriniz: ";
			std::cin >> deger;
		}
	}
}

void tersUcgen(int deger)
{
	for (int i = 0; i < 3; i++)
	{
		if ((deger >= 3 && deger <= 15) && deger % 2 == 1)
		{
			std::cout << std::endl;
			int step = (deger + 1) / 2;
			int star = deger;
			int space = 0;
			for (int i = 0; i < step; i++)
			{
				for (int i = 0; i < space; i++)
				{
					std::cout << " ";
				}
				for (int i = 0; i < star; i++)
				{
					std::cout << "*";
				}
				std::cout << std::endl;
				star -= 2;
				space++;

			}
			return;
		}

		else
		{
			std::cout << std::endl << "Hatali giris yaptiniz lutfen bir daha 3-15 aralginda gecerli bir tek sayi degeri giriniz: ";
			std::cin >> deger;
		}
	}
}

void elmas(int deger,int sayac)
{	
	if (sayac == 0)
	{
		return;
	}
	
	if ((deger >= 5 && deger <= 15) && deger % 2 == 1)
	{
		std::cout << std::endl;
		int step = (deger + 1) / 2;
		int star = 1;
		int space = step - 1;
		duz(step, star, space);
		star = deger;
		space = 0;
		ters(step, star, space);
	}
	else
	{
		std::cout << std::endl << "Hatali giris yaptiniz lutfen bir daha 5-15 araliginda gecerli bir tek sayi degeri giriniz: ";
		std::cin >> deger;
		return elmas(deger, sayac - 1);
	}

}


void duz(int step,int star,int space)
{
	if (step == 0)
	{
		return;
	}
	duzbosluk(space);
	duzyildiz(star);
	std::cout << std::endl;
	return duz(step - 1, star + 2, space - 1);
}

void duzbosluk(int space)
{
	if (space == 0)
	{
		return;
	}

	std::cout << " ";

	return duzbosluk(space - 1);
}

void duzyildiz(int star)
{
	if (star == 0)
	{
		return;
	}

	std::cout << "*";

	return duzyildiz(star - 1);
}

void ters(int step, int star, int space)
{	
	if (step == 0)
	{
		return;
	}
	tersbosluk(space);
	tersyildiz(star);
	std::cout << std::endl;

	return ters(step - 1, star - 2, space + 1);

}

void tersbosluk(int space)
{
	if (space == 0)
	{
		return;
	}

	std::cout << " ";

	return tersbosluk(space - 1);
}

void tersyildiz(int star)
{
	if (star == 0)
	{
		return;
	}

	std::cout << "*";

	return tersyildiz(star - 1);
}