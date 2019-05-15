#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
	int count, randnum;

	for (count=1; count<=20; count++)
	{
		randnum = rand(); 
		cout << randnum << "\n";
	}

	_getch();
	return 0;

}