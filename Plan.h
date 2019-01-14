/***********************************************************************
 * Module:  Plan.h
 * Author:  ya
 * Modified: 11 октября 2017 г. 16:24:08
 * Purpose: Declaration of the class Plan
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Plan_h)
#define __ObjectOrientedModel_1_Plan_h

class Plan
{
public:
   bool work_out(void);
   Plan(); // конструктор за замовченням
   Plan(int, int, int, int); // конструктор ініціалізації
   Plan(Plan& sPlan); // конструктор копії
   Plan(std::string); // конструктор перетворення
   ~Plan(); // деструктор 
 
protected:
private:
   int term;
   int planned_number;
   int sold_number;
   int made_number;


};

#endif