#include "Ground.h"
#include "Transport.h"
Ground::Ground()
{
    base = 0;
    volume = 0;
}

void Ground::set_base()
{
    std::cout << "¬ведите длину колесной базы: " << std::endl;
    std::cin >> base;
}

void Ground::set_volume()
{
    std::cout << "¬ведите объем двигател€(в литрах): " << std::endl;
    std::cin >> volume;
}

int Ground::get_base()
{
    return base;
}

float Ground::get_volume()
{
    return volume;
}
