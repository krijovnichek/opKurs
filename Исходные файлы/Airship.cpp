#include "Airship.h"

Airship::Airship()
{
    //ctor
}
void Airship:: set_gas()
{
    std:: cout << "Введите газ наполнения:" << std:: endl;
    std:: cin >> gas;
}

const char* Airship::get_gas()
{
    const char* x;
    x = gas;
    return x;
}

void Airship::information()
{
    std:: cout << "Транспорт" << std:: endl << "-Воздушный" << std:: endl << "--Дирижабль ";
}
int Airship:: Loading(Airship &x)
{
    std::ifstream fin;
    fin.open("Airship.txt",std::ios::in);
    if(!fin.is_open())
    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        return 0;
    }
    else
    fin.read((char*)&x,sizeof(Airship));
    fin.close();
    return 1;
}

void Airship::Save(Airship &x)
{
    std::ofstream fout;
    fout.open("Airship.txt",std::ios::out);
    fout.write((char*)&x,sizeof(Airship));
    fout.close();
}
