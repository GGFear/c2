/***********************************************************************
 * Module:  Distributor.h
 * Author:  ya
 * Modified: 11 октября 2017 г. 17:03:42
 * Purpose: Declaration of the class Distributor
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Distributor_h)
#define __ObjectOrientedModel_1_Distributor_h

class Distributor
{
public:
   int buy(void);
   int sale(void);
   int add_client(void);
   int delete_client(void);
   int add_distributor(void);
   Distributor(); // конструктор за замовченням
   Distributor(const std::string, const int, const int, const int, const std::string, const int, const int); // конструктор ініціалізації
   Distributor(const Distributor& sDistributor);
   Distributor(std::string); // конструктор перетворення
   ~Distributor(); // деструктор 
protected:
private:
	std::string name;
   int level;
   int saled_goods;
   int clients_number;
   std::string phone;
   int goods_number;
   int profit;


};

#endif