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
    out << std:: endl << "��������: " << x.get_power() << std:: endl <<
        "��� �������: " << x.get_year() << std:: endl <<
        "�������������: " << x.get_manufacturer() <<std:: endl <<
        "������-�������������: " << x.get_country() << std:: endl <<
        "������ ������: " << x.get_high() << std:: endl <<
        "����� �������� ������: " << x.get_runway() << std:: endl <<
        "��� �������� ������: " << x.get_way_type()<< std:: endl;
        return out;
}
    private:
        char way_type[100];
};



#endif // Plane_H_INCLUDED
