#include "Plane.h"
#include "Transport.h"
Plane::Plane()
{
}
void Plane::set_way_type()
{
    std:: cout << "Тип взлетной полосы :" << std:: endl;
    std:: cin >> way_type;
}
const char* Plane::get_way_type()
{
    const char* x;
    x = way_type;
    return x;
}
void Plane::information()
{
    std:: cout << "Транспорт" << std:: endl << "-Воздешный" << std:: endl << "--Самолет ";
}
int Plane:: Loading(Plane &x)
{
    std::ifstream fin;
    fin.open("Plane.txt",std::ios::in);
    if(!fin.is_open())
    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        return 0;
    }
    else
    fin.read((char*)&x,sizeof(Plane));
    fin.close();
    return 1;
}

void Plane::Save(Plane &x)
{
    std::ofstream fout;
    fout.open("Plane.txt",std::ios::out);
    fout.write((char*)&x,sizeof(Plane));
    fout.close();
}
