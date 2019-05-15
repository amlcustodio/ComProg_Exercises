#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	 char a, b, c, A, B, C;   
	cout << "Enter a letter: " ; cin >> a; 

	switch (a) 
	{
	case 'a':
	case 'A': 
		cout << "You're adorable!";
		break; 
	case 'b':
	case 'B': 
		cout << "You're so beautiful!";
		break;
	case 'c':
	case 'C': 
		cout << "You're so cute and full of charm!";
		break;
	}

	_getch(); 
	return 0; 

}