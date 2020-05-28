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
    out << std:: endl << "��������: " << x.get_power() << std:: endl <<
        "��� �������: " << x.get_year() << std:: endl <<
        "�������������: " << x.get_manufacturer() <<std:: endl <<
        "������-�������������: " << x.get_country() << std:: endl <<
        "����� �������� ����: " << x.get_base() << std:: endl <<
        "����� ������ ��������: " << x.get_volume() << std:: endl <<
        "��� �������: " << x.get_vags()<< std:: endl;
        return out;
}
    private:
        char vags[100];

};


#endif // Train_H_INCLUDED
