/***********************************************************************
 * Module:  Plan.cpp
 * Author:  ya
 * Modified: 11 октября 2017 г. 16:24:08
 * Purpose: Implementation of the class Plan
 ***********************************************************************/
#include "stdafx.h"
#include"conio.h"
#include"iostream"
#include"string"
#include "Plan.h"
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Plan::work_out()
// Purpose:    Implementation of Plan::work_out()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool Plan::work_out(void)
{
	return 0; // TODO : implement
}
Plan::Plan() :
term(1),
planned_number(1),
sold_number(1),
made_number(1)
{
	cout << "'Plan' was created (default)." << endl;
} // конструктор за замовченням


Plan::Plan(int m, int g, int t, int k) :
term(m),
planned_number(g),
sold_number(t),
made_number(k)
{
	cout << "'Plan was created (initialisation)." << endl;
} // конструктор ініціалізації


Plan::Plan(Plan& sPlan) :
term(sPlan.term),
planned_number(sPlan.planned_number),
sold_number(sPlan.sold_number),
made_number(sPlan.made_number)
{
	cout << "'Plan was created (copy)." << endl;
} // конструктор копії

Plan::Plan(std::string str){


	std::string str2 = str.substr(0, 4);
	const char* s2 = str2.c_str();
	term = atoi(s2);

	std::string str3 = str.substr(4, 4);
	const char* s3 = str3.c_str();
	planned_number = atoi(s3);

	std::string str4 = str.substr(8, 4);
	const char* s4 = str4.c_str();
	sold_number = atoi(s4);

	std::string str5 = str.substr(12, 4);
	const char* s5 = str5.c_str();
	made_number = atoi(s5);
	cout << "'Plan was created (transform)." << endl;
} // конструктор перетворення
Plan::~Plan(){ cout << "'Plan was destroyed." << endl; } // деструктор