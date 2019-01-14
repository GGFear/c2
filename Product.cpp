#include "stdafx.h"
#include"conio.h"
#include"iostream"
#include"string"
#include "Product.h"

using namespace std;

Product::Product() :
name(""),
 price(0),
 index(0),
dimensions(""),
availability(false),
number(0)
{
	cout << "'Product' was created (default)." << endl;
} // конструктор за замовченням


Product::Product(const std::string f, const  int q, const  int d, const  std::string r, const  bool t, const  int m) :
name(f),
price(q),
index(d),
dimensions(r),
availability(t),
number(m)
{
	cout << "'Product was created (initialisation)." << endl;
} // конструктор ініціалізації


Product::Product(const Product& sProduct) :
name(sProduct.name),
price(sProduct.price),
index(sProduct.index),
dimensions(sProduct.dimensions),
availability(sProduct.availability),
number(sProduct.number)
{
	cout << "'Product was created (copy)." << endl;
} // конструктор копії

Product::Product(std::string str){


	std::string str1 = str.substr(0, 4);
	name = str1;

	std::string str2 = str.substr(4, 4);
	const char* s2 = str2.c_str();
	index = atoi(s2);

	std::string str3 = str.substr(4, 4);
	const char* s3 = str3.c_str();
	price = atoi(s3);

	std::string str4 = str.substr(8, 4);
	dimensions = str4;

	std::string str5 = str.substr(12, 4); //ЮЛЯ
	const char* s5 = str5.c_str();
	availability = atoi(s5);

	std::string str6 = str.substr(16, 4);
	const char* s6 = str6.c_str();
	number = atoi(s6);

	cout << "'Product was created (transform)." << endl;
} // конструктор перетворення
Product::~Product(){ cout << "'Product was destroyed." << endl; } // деструктор