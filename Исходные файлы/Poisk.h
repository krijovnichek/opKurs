#ifndef POISK_H_INCLUDED
#define POISK_H_INCLUDED

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
#include "PrgList.cpp"
#include "PrgMenu.h"


using namespace TRANSPORT;
using namespace MyList;
using namespace MyMenu;

namespace MyInterface
{
class My_interface
{
public:
    My_interface();

    void Menu(MY_list <Train> trn1, MY_list <Bus> bus1, MY_list <Airship> air1, MY_list <Plane> pln1);

};

}

#endif // POISK_H_INCLUDED
