/***********************************************************************
 * Module:  Client.cpp
 * Author:  ya
 * Modified: 11 октября 2017 г. 16:22:29
 * Purpose: Implementation of the class Client
 ***********************************************************************/
#include "stdafx.h"
#include"conio.h"
#include"iostream"
#include"string"
#include "Client.h"

using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Client::buy()
// Purpose:    Implementation of Client::buy()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Client::buy(void)
{
	return 0; // TODO : implement
}

Client::Client() :
name(""),
phone("")
{
	cout << "'Client' was created (default)." << endl;
} // конструктор за замовченням


Client::Client(std::string j, std::string f) :

name(f),
phone(j)
{
	cout << "'Client' was created (initialisation)." << endl;
} // конструктор ініціалізації


Client::Client(Client& sClient) :
phone(sClient.phone),
name(sClient.name)

{
	cout << "'Client' was created (copy)." << endl;
} // конструктор копії

Client::Client(std::string str){

	std::string str1 = str.substr(0, 4);
	name = str1;

	std::string str2 = str.substr(4, 14);
	phone = str2;
	cout << "'Client' was created (transform)." << endl;
} // конструктор перетворення
Client::~Client(){ cout << "'Client' was destroyed." << endl; } // деструктор