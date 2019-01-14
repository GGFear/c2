/***********************************************************************
 * Module:  Client.cpp
 * Author:  ya
 * Modified: 11 ������� 2017 �. 16:22:29
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
} // ����������� �� �����������


Client::Client(std::string j, std::string f) :

name(f),
phone(j)
{
	cout << "'Client' was created (initialisation)." << endl;
} // ����������� �����������


Client::Client(Client& sClient) :
phone(sClient.phone),
name(sClient.name)

{
	cout << "'Client' was created (copy)." << endl;
} // ����������� ��ﳿ

Client::Client(std::string str){

	std::string str1 = str.substr(0, 4);
	name = str1;

	std::string str2 = str.substr(4, 14);
	phone = str2;
	cout << "'Client' was created (transform)." << endl;
} // ����������� ������������
Client::~Client(){ cout << "'Client' was destroyed." << endl; } // ����������