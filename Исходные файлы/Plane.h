#ifndef PLANE_H_INCLUDED
#define PLANE_H_INCLUDED

#include "Flying.h"
#include "Transport.h"
using namespace TRANSPORT;
class Plane: public Flying
{
    public:
        Plane();
        void set_way_type();
        const char* get_way_type();
        void information();
        int Loading(Plane &x);
        void Save(Plane &x);
        friend std::ostream& operator<< (std::ostream &out, Plane &x)
{
    out << std:: endl << "Мощность: " << x.get_power() << std:: endl <<
        "Год выпуска: " << x.get_year() << std:: endl <<
        "Производитель: " << x.get_manufacturer() <<std:: endl <<
        "Страна-производитель: " << x.get_country() << std:: endl <<
        "Высота полета: " << x.get_high() << std:: endl <<
        "Длина взлетной полосы: " << x.get_runway() << std:: endl <<
        "Тип взлетной полосы: " << x.get_way_type()<< std:: endl;
        return out;
}
    private:
        char way_type[100];
};



#endif // Plane_H_INCLUDED
