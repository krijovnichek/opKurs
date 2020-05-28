#include "Flying.h"
#include "Transport.h"
Flying::Flying()
{

}
void Flying::set_high()
{
    std:: cout << "¬ведите высоту полета(в метрах): "<< std::endl;
    std:: cin >> high;
}

void Flying::set_runway()
{
    std::cout << "¬ведите тип взлетный полосы: " << std::endl;
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
