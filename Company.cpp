/***********************************************************************
 * Module:  Company.cpp
 * Author:  ya
 * Modified: 11 октября 2017 г. 16:22:19
 * Purpose: Implementation of the class Company
 ***********************************************************************/
#include "stdafx.h"
#include"conio.h"
#include"string"
#include "plan.h"
#include "Distributor.h"
#include "Product.h"
#include "Company.h"
#include"iostream"
#include <vector>
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Company::add_distr()
// Purpose:    Implementation of Company::add_distr()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Company::add_distr(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Company::delete_distr()
// Purpose:    Implementation of Company::delete_distr()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Company::delete_distr(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Company::make_product()
// Purpose:    Implementation of Company::make_product()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Company::make_product(void)
{
	return 0; // TODO : implement
}


Company::Company() : 
m_distributor(1), //виклик конструктора класу Дистриб'ютор за замовчуванням
m_plan(), //виклик конструктора класу План за замовчуванням
m_product(1), //виклик конструктора класу Товар за замовчуванням
distributor_number(1),
goods_number(1),
goods_price(1),
name(""),
mlm_level(1)

{
	cout << "'Company' was created (default)." << endl;
} // конструктор за замовченням


Company::Company(int m, int g, float t, int k, std::string f) :
m_product(0, Product("ff",1,1,"ff",1,1)),
m_plan(1,1,1,1),
m_distributor(1, Distributor("ff",1,1,1,"ff",1,1)),

distributor_number(m),
goods_number(g),
goods_price(t),
name(f),
mlm_level(k)

{
	cout << "'Company was created (initialisation)." << endl;
} // конструктор ініціалізації


Company::Company(Company& sCompany) :
m_plan(sCompany.m_plan),
m_distributor(sCompany.m_distributor),
m_product(sCompany.m_product),
distributor_number(sCompany.distributor_number),
goods_number(sCompany.goods_number),
goods_price(sCompany.goods_price),
name(sCompany.name),
mlm_level(sCompany.mlm_level)
{
	cout << "'Company was created (copy)." << endl;
} // конструктор копії

Company::Company(std::string str):
m_distributor(0, Distributor("AAAA__01___0___0___0___0")), 
m_plan("___0___0___0___0"), 
m_product(1, Product("AAAA___0___11234false___1"))

     {
		
		std::string str1 = str.substr(0, 4);
		name = str1;

		std::string str2 = str.substr(4, 4);
		const char* s2 = str2.c_str();
		distributor_number = atoi(s2);

		std::string str3 = str.substr(4, 8);
		const char* s3 = str3.c_str();
		goods_number = atoi(s3);

		std::string str4 = str.substr(8, 12);
		const char* s4 = str4.c_str();
		goods_price = atoi(s4);

		std::string str5 = str.substr(12, 16);
		const char* s5 = str5.c_str();
		mlm_level = atoi(s5);

		cout << "'Company was created (transform)." << endl; }
// конструктор перетворення
Company::~Company(){ cout << "'Company was destroyed." << endl; } // деструктор