#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a;
	cout << "Enter your number of units: "; cin >> a;

	if (a < 32)
		cout << "Level: Freshman \n";
	else if (a >= 32 && a < 64)
		cout << "Level: Sophomore \n";
	else if (a >= 64 && a < 96)
		cout << "Level: Junior \n";
	else if (a >= 96 && a < 121)
		cout << "Level: Senior \n";
	else
		cout << "INVALID \n";

	_getch();
	return 0;
}

