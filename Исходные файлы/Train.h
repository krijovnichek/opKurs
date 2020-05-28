#ifndef TRAIN_H_INCLUDED
#define TRAIN_H_INCLUDED

#include "Ground.h"
#include "Transport.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
using namespace TRANSPORT;
class Train: public Ground
{
    public:
        Train();
        void set_vags();
        const char* get_vags();
        void information();
        int Loading(Train &x);
        void Save(Train &x);
        friend std::ostream& operator<< (std::ostream &out, Train &x)
{
    out << std:: endl << "Мощность: " << x.get_power() << std:: endl <<
        "Год выпуска: " << x.get_year() << std:: endl <<
        "Производитель: " << x.get_manufacturer() <<std:: endl <<
        "Страна-производитель: " << x.get_country() << std:: endl <<
        "Длина колесной базы: " << x.get_base() << std:: endl <<
        "Объем камеры сгорания: " << x.get_volume() << std:: endl <<
        "Тип вагонов: " << x.get_vags()<< std:: endl;
        return out;
}
    private:
        char vags[100];

};


#endif // Train_H_INCLUDED
