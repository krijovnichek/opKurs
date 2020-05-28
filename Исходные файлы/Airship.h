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
    out << std:: endl << "��������: " << x.get_power() << std:: endl <<
        "��� �������: " << x.get_year() << std:: endl <<
        "�������������: " << x.get_manufacturer() <<std:: endl <<
        "������-�������������: " << x.get_country() << std:: endl <<
        "������ ������: " << x.get_high() << std:: endl <<
        "����� �������� ������: " << x.get_runway() << std:: endl <<
        "��� ����������: " << x.get_gas()<< std:: endl;
        return out;
}
    private:
        char gas[100];
};


#endif // Airship_H_INCLUDED
