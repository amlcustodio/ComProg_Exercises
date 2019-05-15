#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a,b;
	cout << "Enter first number: "; cin >> a;
	cout << "Enter second number: "; cin >> b;

	if (a < b)
		cout << "First number is less than second. \n";
	else if (a = b)
		cout << "First number is equals to the second number. \n";
	else
		cout << "Second number is less than first. \n";

	_getch();
	return 0;

}
