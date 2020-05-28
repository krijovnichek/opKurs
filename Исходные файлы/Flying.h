#ifndef FLYING_H_INCLUDED
#define FLYING_H_INCLUDED

#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include "Transport.h"
using namespace TRANSPORT;
class Flying: public Transport
{
    public:
        Flying();
        void  set_high();
        void set_runway();
        float get_high();
        const char* get_runway();
    private:
        float high;
        char runway[100];
};

#endif // Flying_H_INCLUDED
