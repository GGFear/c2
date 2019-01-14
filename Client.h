	/***********************************************************************
 * Module:  Client.h
 * Author:  ya
 * Modified: 11 ������� 2017 �. 16:22:29
 * Purpose: Declaration of the class Client
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Client_h)
#define __ObjectOrientedModel_1_Client_h

class Client
{
public:
   int buy(void);
   Client(); // ����������� �� �����������
   Client(std::string, std::string); // ����������� �����������
   Client(Client& sClient); // ����������� ��ﳿ
   Client(std::string); // ����������� ������������
   ~Client(); // ���������� 
protected:
private:
   std::string name;
   std::string phone;


};

#endif