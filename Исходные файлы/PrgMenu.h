#ifndef PRGMENU_H_INCLUDED
#define PRGMENU_H_INCLUDED

#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include "Transport.h"
#include "Ground.h"
#include "Train.h"
#include "Bus.h"
#include "Flying.h"
#include "Airship.h"
#include "Plane.h"
#include "PrgList.h"


using namespace TRANSPORT;
using namespace MyList;
namespace MyMenu
{
    class My_menu
{
    public:
        My_menu();
        int Poisk(MY_list <Train> object);
        int Poisk(MY_list <Bus> object);
        int Poisk(MY_list <Airship> object);
        int Poisk(MY_list <Plane> object);
};

}

#endif // PRGMENU_H_INCLUDED
