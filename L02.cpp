// L02.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define Zadanie2B

#ifdef Zadanie2A
int main()

{
	double f = 0, x = 0, a = 0, b = 0;
	cout << "Podaj wartosc x = ";
	cin >> x;
	cout << "Podaj wartosc a = ";
	cin >> a;
	cout << "Podaj wartosc b = ";
	cin >> b;

	// a)

	if (sin(a * x + b) != 0)
	{
		f = cos(a * x - b) / sin(a * x + b);
		cout << "f(x) = " << setprecision(5) << f << endl;
	}
	else
	{
		cout << "Mianownik rowny 0" << endl;
	}

	// b)

	if ((a + fabs(2.5 * x + b)) >= 0)
	{
		f = pow((a + fabs(2.5 * x + b)), 1.0 / 6.0);
		cout << "g(x) = " << setprecision(5) << f << endl;
	}
	else
	{
		cout << "Pierwiastkowanie nie jest mozliwe, poniewaz wyrazenie pod pierwiastkiem <0" << endl;
	}

	// c)

	/*  Inne rozwiazanie Zadania 2A c)
	if (a > 0 && a != 1 && b > 0)
	{
		f = log(b) / log(a); // wykorzystanie wlasnosci logarytmu
		cout << "h(x) = " << setprecision(5) << f << endl;
	}
	else
	{
		cout << "Logarytmowanie nie jest mozliwe" << endl;
	}
	*/

	if (a > 0)
	{
		if (a != 1)
		{
			if (b > 0)
			{
				f = log(b) / log(a); // wykorzystanie wlasnosci logarytmu
				cout << "h(x) = " << setprecision(5) << f << endl;
			}
			else
			{
				cout << "Liczba logarytmowana <= 0" << endl;
			}
		}
		else
		{
			cout << "Podstawa logarytmu = 1" << endl;
		}
	}
	else 
	{
		cout << "Podstawa logarytmu <= 0" << endl;
	}
}
#endif // Zadanie2A

#ifdef Zadanie2B
int main() 
{
	double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

	if (a != 0)
	{
		if (b != 0)
		{
			if (c != 0)
			{

			}
			else
			{

			}
		}
		else
		{

		}
	}
	else
	{
		if (b == 0)
		{
			cout << "x:{}" << endl;
		}
		else
		{
			x1 = ((-1) * c) / b;
		}
	}

}
#endif // Zadanie2B




