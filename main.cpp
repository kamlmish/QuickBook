#include <iostream>
#include <stdlib.h>
#include "CKeyCode.h"
#include "CPeripherals.h"

using namespace std;

int main()
{
    string input;
    cout << "Do you have the Bill?"<<endl;
    cin >> input;
    if(input.compare("Yes") == 0)
    {
        cout << "CBarcode"<<endl;
    }
    else if(input.compare("No") == 0)
    {
        cout << "CKeycode"<<endl;
        CKeyCode obj;
        obj.getAccountNo();
        obj.getPaymentAmount();
    }
    else
    {
        cout<<"Invalid input"<<endl;
        cout <<"List all Peripherals"<<endl;
        CPeripherals* cper1 = CPeripherals::instance();
        cper1->getAllDevices();
        exit(-1);
    }




    return 0;
}

