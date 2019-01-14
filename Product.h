/***********************************************************************
 * Module:  Product.h
 * Author:  ya
 * Modified: 11 октября 2017 г. 17:06:57
 * Purpose: Declaration of the class Product
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Product_h)
#define __ObjectOrientedModel_1_Product_h

class Product
{
public:
	Product();
	Product(const std::string, const  int, const  int, const  std::string, const  bool, const  int); // конструктор ініціалізації
	Product(const Product& sProduct); // конструктор копії
	Product(std::string); // конструктор перетворення
	~Product(); // деструктор 
protected:
private:
	std::string name;
   float price;
   int index;
   std::string dimensions;
   bool availability;
   int number;


};

#endif