/***********************************************************************
 * Module:  Company.h
 * Author:  ya
 * Modified: 11 ������� 2017 �. 16:22:19
 * Purpose: Declaration of the class Company
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Company_h)
#define __ObjectOrientedModel_1_Company_h
#include "Plan.h";
#include "Plan.h"
#include "Distributor.h"
#include "Product.h"
#include <vector>
using namespace std;
class Plan;
class Distributor;
class Product;

class Company
{
public:
   void add_distr(void);
   void delete_distr(void);
   int make_product(void);
   Company(); // ����������� �� �����������
   Company(int, int, float, int, std::string); // ����������� �����������
   Company(Company& sCompany); // ����������� ��ﳿ
   Company(std::string); // ����������� ������������
   ~Company(); // ���������� 
   Distributor** M_distributor;
   Product** M_product;
   Plan* M_plan;
protected:
private:
   int distributor_number;
   int goods_number;
   float goods_price;
   int mlm_level;
   std::string name;
 std::vector <Distributor> m_distributor;
  std::vector <Product> m_product;
   Plan m_plan;

};

#endif