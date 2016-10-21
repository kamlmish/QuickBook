#include <iostream>
#include <string>

using namespace std;

class CKeyCode
{
 public:
     CKeyCode();
     ~CKeyCode();

     void getAccountNo();
     void getPaymentAmount();



private:
     string mAccInput;
     string mAmtInput;

};
