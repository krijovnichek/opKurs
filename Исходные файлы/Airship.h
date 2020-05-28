#ifndef AIRSHIP_H_INCLUDED
#define AIRSHIP_H_INCLUDED

#include "Flying.h"

class Airship: public Flying
{
    public:
        Airship();
        void set_gas();
        const char* get_gas();
        void information();
        int Loading(Airship &x);
        void Save(Airship &x);
        friend std::ostream& operator<< (std::ostream &out, Airship &x)
{
    out << std:: endl << "Мощность: " << x.get_power() << std:: endl <<
        "Год выпуска: " << x.get_year() << std:: endl <<
        "Производитель: " << x.get_manufacturer() <<std:: endl <<
        "Страна-производитель: " << x.get_country() << std:: endl <<
        "Высота полета: " << x.get_high() << std:: endl <<
        "Длина взлетной полосы: " << x.get_runway() << std:: endl <<
        "Газ наполнения: " << x.get_gas()<< std:: endl;
        return out;
}
    private:
        char gas[100];
};


#endif // Airship_H_INCLUDED
