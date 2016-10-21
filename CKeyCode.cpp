#include "CKeyCode.h"


CKeyCode::CKeyCode()
{
    //getAccountNo();
    //getPaymentAmount();
}


CKeyCode::~CKeyCode()
{

}


void CKeyCode::getAccountNo()
{
    string accInput;
    cout <<"Enter the Account No"<<endl;
    cin >> accInput;
    mAccInput = accInput;
    cout <<"Account: "<<mAccInput<<endl;
}

void CKeyCode::getPaymentAmount()
{
    string amtInput;
    cout<<"Enter the Amount to be paid"<<amtInput;
    cin>>amtInput;
    mAmtInput = amtInput;
    cout <<"Amount: "<<mAmtInput<<endl;
}
