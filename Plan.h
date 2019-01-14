/***********************************************************************
 * Module:  Plan.h
 * Author:  ya
 * Modified: 11 ������� 2017 �. 16:24:08
 * Purpose: Declaration of the class Plan
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Plan_h)
#define __ObjectOrientedModel_1_Plan_h

class Plan
{
public:
   bool work_out(void);
   Plan(); // ����������� �� �����������
   Plan(int, int, int, int); // ����������� �����������
   Plan(Plan& sPlan); // ����������� ��ﳿ
   Plan(std::string); // ����������� ������������
   ~Plan(); // ���������� 
 
protected:
private:
   int term;
   int planned_number;
   int sold_number;
   int made_number;


};

#endif