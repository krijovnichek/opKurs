#ifndef GROUND_H_INCLUDED
#define GROUND_H_INCLUDED

#include "Transport.h"
using namespace TRANSPORT;
class Ground:public Transport
{
    public:
        Ground();
        void set_base();
        void set_volume();
        int get_base();
        float get_volume();
    private:
        int base;
        float volume;
};


#endif // Ground_H_INCLUDED
