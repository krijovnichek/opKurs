#include "Transport.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

namespace TRANSPORT
{
Transport::Transport()
{
    power = 0;
    year = 0;
    country[0] = '\0';
    manufacturer[0] = '\0';

}
void Transport::set_power()
{
    std:: cout << "¬ведите мощность(в л.с.):" << std:: endl;
    std:: cin >> power;
}

void Transport::set_year()
{
    std:: cout << "¬ведите год выпуска:" << std:: endl;
    std:: cin >> year;
}

void Transport::set_manufacturer()
{
    std:: cout << "¬ведите производител€:" << std:: endl;
    std:: cin >> manufacturer;
}

void Transport::set_country()
{
    std:: cout << "¬ведите страну-производител€ :" << std:: endl;
    std:: cin >> country;
}

float Transport::get_power()
{
    return power;
}

int Transport::get_year()
{
        return year;
}
const char* Transport::get_manufacturer()
{
        const char* x;
        x=manufacturer;
        return x;
}
const char* Transport::get_country()
{
    const char* x;
    x = country;
    return x;
}
}
