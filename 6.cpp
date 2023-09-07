#include <conio.h>
#include <stdio.h>

#include <iostream>
using namespace std;


int main()
{
	float n1, n2, n3, op;
	
	cout << "Dime un numero: ";
	cin >> n1;
	cout << "Dime otro numero: ";
	cin >> n2;
	cout << "Dime otro numero: ";
	cin >> n3;
	op = (n1 + n2)/n3;
	cout << "su resultado es" << op;
	
	return 0;
	
}
