#ifndef TRANSPORT_H_INCLUDED
#define TRANSPORT_H_INCLUDED

#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>


namespace TRANSPORT
{
class Transport
{

private:
    float power;
    int year;
    char manufacturer[100];
    char country[100];
public:
    Transport();

virtual void information() = 0;
void set_power();
void set_year();
void set_manufacturer();
void set_country();
float get_power();
int get_year();
const char* get_manufacturer();
const char* get_country();
};
}
#endif // Transport_H_INCLUDED
