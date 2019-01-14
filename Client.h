	/***********************************************************************
 * Module:  Client.h
 * Author:  ya
 * Modified: 11 октября 2017 г. 16:22:29
 * Purpose: Declaration of the class Client
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Client_h)
#define __ObjectOrientedModel_1_Client_h

class Client
{
public:
   int buy(void);
   Client(); // конструктор за замовченням
   Client(std::string, std::string); // конструктор ініціалізації
   Client(Client& sClient); // конструктор копії
   Client(std::string); // конструктор перетворення
   ~Client(); // деструктор 
protected:
private:
   std::string name;
   std::string phone;


};

#endif