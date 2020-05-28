#include "Bus.h"

Bus::Bus()
{
    //ctor
}
void Bus::set_gears()
{
    std:: cout << "Введите тип двигателя:" << std:: endl;
    std:: cin >> gears;
}

const char* Bus::get_gears()
{
    const char* x;
    x = gears;
    return x;
}

void Bus::information()
{
    std:: cout << "Двигатель" << std:: endl << "-Двигатель внутреннего сгорания" << std:: endl << "--Дизельный ";
}
int Bus:: Loading(Bus &x)
{
    std::ifstream fin;
    fin.open("Bus.txt",std::ios::in);
    if(!fin.is_open())
    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        return 0;
    }
    else
    fin.read((char*)&x,sizeof(Bus));
    fin.close();
    return 1;
}

void Bus::Save(Bus &x)
{
    std::ofstream fout;
    fout.open("Bus.txt",std::ios::out);
    fout.write((char*)&x,sizeof(Bus));
    fout.close();
}
