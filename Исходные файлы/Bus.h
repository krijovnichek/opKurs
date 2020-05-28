#ifndef BUS_H_INCLUDED
#define BUS_H_INCLUDED

#include "Ground.h"

class Bus: public Ground
{
    public:
        Bus();
        void  set_gears();
        const char* get_gears();
        void information();
        int Loading(Bus &x);
        void Save(Bus &x);
        friend std::ostream& operator<< (std::ostream &out, Bus &x)
{
    out << std:: endl << "Мощность: " << x.get_power() << std:: endl <<
        "Год выпуска: " << x.get_year() << std:: endl <<
        "Производитель: " << x.get_manufacturer() <<std:: endl <<
        "Страна-производитель: " << x.get_country() << std:: endl <<
        "Длина колесной базы: " << x.get_base() << std:: endl <<
        "Объем: " << x.get_volume() << std:: endl <<
        "Тип двигателя: " << x.get_gears()<< std:: endl;
        return out;
}
    private:
        char gears[100];
};



#endif // Bus_H_INCLUDED
