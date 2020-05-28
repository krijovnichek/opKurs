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
    out << std:: endl << "��������: " << x.get_power() << std:: endl <<
        "��� �������: " << x.get_year() << std:: endl <<
        "�������������: " << x.get_manufacturer() <<std:: endl <<
        "������-�������������: " << x.get_country() << std:: endl <<
        "����� �������� ����: " << x.get_base() << std:: endl <<
        "�����: " << x.get_volume() << std:: endl <<
        "��� ���������: " << x.get_gears()<< std:: endl;
        return out;
}
    private:
        char gears[100];
};



#endif // Bus_H_INCLUDED
