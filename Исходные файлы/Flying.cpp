#include "Flying.h"
#include "Transport.h"
Flying::Flying()
{

}
void Flying::set_high()
{
    std:: cout << "������� ������ ������(� ������): "<< std::endl;
    std:: cin >> high;
}

void Flying::set_runway()
{
    std::cout << "������� ��� �������� ������: " << std::endl;
    std::cin >> runway;
}

float Flying::get_high()
{
    return high;
}

const char* Flying::get_runway()
{
        const char* x;
        x = runway;
        return x;
}
