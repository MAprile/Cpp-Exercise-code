// Calcolatrice.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include "pch.h"
#include <iostream>

using namespace std;

char op;
float n1, n2, r;

int main()
{
	cout << "Calculator V1.0\n";
	cout << "Insert first number : \n"; cin >> n1;
	cout << "Insert second number :\n"; cin >> n2;
	cout << "Choose the operator :\n"
		<< " + = Sum\n"
		<< " - = Subtraction\n"
		<< " / = Division\n"
		<< " * = Multiplication\n"; cin >> op;
	if (op == '+') {
		r = n1+n2;
	}
	if (op == '-') {
		r = n1-n2;
	}
	if (op == '/') {
		r = n1/n2;
	}
	if (op == '*') {
		r = n1*n2;
	}

	cout << "The result is = " << r;
}
