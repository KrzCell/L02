// L02.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define Zadanie2C

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
	double a = 0, b = 0, c = 0, x1 = 0, x2 = 0, delta = 0;
	cout << "Podaj a = ";
	cin >> a;
	cout << "Podaj b = ";
	cin >> b;
	cout << "Podaj c = ";
	cin >> c;


	if (a != 0)
	{
		delta = b * b - 4 * a * c;
		if (delta >= 0)
		{
			if (delta > 0)
			{
				x1 = ((-1) * b - sqrt(delta)) / (2 * a);
				x2 = ((-1) * b + sqrt(delta)) / (2 * a);
				cout << "x1 = " << x1 << " x2 = " << x2 << endl;
			}
			else
			{
				x1 = ((-1) * b) / (2 * a);
				cout << "x1 = x2 = " << x1 << endl;
			}
		}
		else
		{
			cout << "x:{}" << endl;
		}

	}
	else
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "x:R" << endl;
			}
			else
			{
				cout << "x:{}" << endl;
			}
		}
		else
		{
			x1 = ((-1) * c) / b;
			cout << "x0 = " << x1 << endl;
		}
		
	}

}
#endif // Zadanie2B

#ifdef Zadanie2C
int main()
{
	double a, b, c, p1;
	int n = 0;
	bool rboczny = false, rramienny = false, prost = false, roznoboczny = false, t1=false, t2=false, t3=false, t4=false;
	
	cout << "1 lub 2 -> ";
	cin >> n;
	switch (n)
	{
	case 1:
		a = 3;
		b = 3;
		c = 3;
		p1 = 3.89711;
		rboczny = true;
		rramienny = true;
		roznoboczny = false;
		prost = false;
		break;
	case 2:
		a = 3;
		b = 4;
		c = 5;
		p1 = 6;
		rboczny = false;
		rramienny = false;
		roznoboczny = true;
		prost = true;
		break;
	default:
		a = 0;
		b = 0;
		c = 0;
		break;
	}

	if (0 < a && 0 < b && 0 < c)
	{
		if (a < b + c || b < a + c || c < a + b)
		{
			double p = (a + b + c) * 0.5;
			double pole = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "Pole trojkata wynosi: " << pole << endl;

			if (a == b || b == c || c == a)
			{
				cout << "Mozna utworzyc trojkat rownoramienny\n"; t1 = true;
			}
			else {
				t1 = false;
			}
			if (a == b && b == c && c == a)
			{
				cout << "Mozna utworzyc trojkat rownoboczny\n"; t2 = true;
			}
			else {
				t2 = false;
			}
			if (a != b && b != c && c != a)
			{
				cout << "Mozna utworzyc trojkat roznoboczny\n"; t3 = true;
			}
			else {
				t3 = false;
			}
			if (c == sqrt(a * a + b * b) || b == sqrt(a * a + b * b) || a == sqrt(b * b + c * c))
			{
				cout << "Mozna utworzyc trojkat prostokatny\n"; t4 = true;
			}
			else {
				t4 = false;
			}

		}
		else cout << "Z tych bokow nie da sie utworzyc trojkata!\n";
	}
	else cout << "Boki nie sa dodatnie!\n";

	switch (n)
	{
	default: case 1: case 2:
		if (prost==t4)
		{
			if (rramienny == t1)
			{
				if(rboczny == t2)
				{
					if (roznoboczny == t3)
					{
						cout << "Test " << n << ": Ok" << endl;
					}
					else {
						cout << "Test " << n << ": Fail" << endl;
					}
				}
			}
		}
		break;
	}

}
#endif //Zadanie2C




