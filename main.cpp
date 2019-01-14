// ver1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"conio.h"
#include"iostream"
#include"string"
#include "Client.h"
#include "Company.h"
#include"Distributor.h"
#include"Plan.h"
#include"Product.h"
#include <vector>
using namespace std;

int main()
{
	cout << " Version 2 by Putova Yulia\n Group IS-62" << endl;

	cout << "Program is running." << endl << endl;
	
   {	cout << endl << "\ncreating 'Client':\n" << endl;
	Client client1; //конструктор за замовчуванням
	Client client2("", ""); // конструктор ініціалізації
	Client client1_copy(client1); // конструктор копії
	Client("AAAA0664344157"); //конструктор перетворення
	}
   cout << "\n" << endl;

	{	cout << endl << "creating 'Company':\n" << endl;
	Company comp1;//конструктор за замовчуванням
	cout << endl << endl;
	Company comp2(1, 1, 1, 1, ""); // конструктор ініціалізації
	cout << endl << endl;
	Company comp1_copy(comp1); // конструктор копії
	cout << endl << endl;
	Company ("firm_1001000__50___2");//конструктор перетворення
	cout << endl << endl;
	}

	
	system("notepad.exe ver11.txt"); //опис завдання
	cin.get();
}

