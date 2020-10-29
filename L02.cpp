// L02.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define Zadanie2A

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

	if (sin(a * x + b) != 0)
	{
		f = cos(a * x - b) / sin(a * x + b);
		cout << "f(x) = " << f << endl;
	}
	else
	{
		cout << "Mianownik rowny 0!" << endl;
	}

	

}
#endif // Zadanie2A


