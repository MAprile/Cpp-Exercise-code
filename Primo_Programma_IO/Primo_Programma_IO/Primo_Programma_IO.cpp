// Primo_Programma_IO.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//
// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug


#include "pch.h"
#include <iostream>

using namespace std;

float x;
char y;

int main()
{
	do
	{
		cout << "Insert number to Check\n"; cin >> x;

		if (x >= 2 && x <= 5) 
		{
			cout << "The number is included between 2 and 5.\n";
		}
		else
		{
			cout << "The number is not included between 2 and 5.";
		}
			cout << "Continue? Y/N \n"; cin >> y;
	} while(y == 'y' || y == 'Y');
} 

