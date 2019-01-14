/***********************************************************************
 * Module:  Distributor.cpp
 * Author:  ya
 * Modified: 11 октября 2017 г. 17:03:42
 * Purpose: Implementation of the class Distributor
 ***********************************************************************/
#include "stdafx.h"
#include"conio.h"
#include"iostream"
#include"string"
#include <vector>
#include "Distributor.h"
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Distributor::buy()
// Purpose:    Implementation of Distributor::buy()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Distributor::buy(void)
{
	return 0; // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Distributor::sale()
// Purpose:    Implementation of Distributor::sale()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Distributor::sale(void)
{
	return 0;// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Distributor::add_client()
// Purpose:    Implementation of Distributor::add_client()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Distributor::add_client(void)
{
	return 0;// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Distributor::delete_client()
// Purpose:    Implementation of Distributor::delete_client()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Distributor::delete_client(void)
{
	return 0;// TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Distributor::add_distributor()
// Purpose:    Implementation of Distributor::add_distributor()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Distributor::add_distributor(void)
{
	return 0;// TODO : implement
}

Distributor::Distributor() :
name(""),
level(0),
saled_goods(0),
clients_number(0),
phone(""),
goods_number(0),
profit(0)
{
	cout << "'Distributor' was created (default)." << endl;
} // конструктор за замовченням




Distributor::Distributor(const Distributor& sDistributor) :
name(sDistributor.name),
level(sDistributor.level),
saled_goods(sDistributor.saled_goods),
clients_number(sDistributor.clients_number),
phone(sDistributor.phone),
goods_number(sDistributor.goods_number),
profit(sDistributor.profit)
{
	cout << "'distributor was created (copy)." << endl;
} // конструктор копії

Distributor::Distributor(std::string f, int q, int d, int r, std::string l, int t, int m) :
name(f),
level(q),
saled_goods(d),
clients_number(r),
phone(l),
goods_number(t),
profit(m)
{
	cout << "'Distributor was created (initialisation)." << endl;
} // конструктор ініціалізації

Distributor::Distributor(std::string str){

	
	std::string str1 = str.substr(0, 4);
	name = str1;

	std::string str2 = str.substr(4, 4);
	const char* s2 = str2.c_str();
	level = atoi(s2);

	std::string str3 = str.substr(8, 4);
	const char* s3 = str3.c_str();
	goods_number = atoi(s3);

	std::string str4 = str.substr(12, 4);
	const char* s4 = str4.c_str();
	saled_goods = atoi(s4);

	std::string str5 = str.substr(16, 4);
	const char* s5 = str5.c_str();
	profit = atoi(s5);

	std::string str6 = str.substr(20, 4);
	const char* s6 = str6.c_str();
	clients_number = atoi(s6);

	std::string str7 = str.substr(24, 4);
	phone = str7;
	cout << "'Distributor was created (transform)." << endl;
} // конструктор перетворення
Distributor::~Distributor(){ cout << "'Distributor was destroyed." << endl; } // деструктор