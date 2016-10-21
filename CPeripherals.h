#ifndef CPERIPHERALS_H
#define CPERIPHERALS_H

#include <libudev.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class CPeripherals
{
private:
    static bool mInstance;
    CPeripherals()
    {

    }

public:
    ~CPeripherals()
    {
        mInstance = false;
    }
    static CPeripherals* instance();
    static CPeripherals* single;

    int getAllDevices();

};

#endif // CPERIPHERALS_H
