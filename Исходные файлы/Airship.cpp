#include "Airship.h"

Airship::Airship()
{
    //ctor
}
void Airship:: set_gas()
{
    std:: cout << "������� ��� ����������:" << std:: endl;
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
    std:: cout << "���������" << std:: endl << "-���������" << std:: endl << "--��������� ";
}
int Airship:: Loading(Airship &x)
{
    std::ifstream fin;
    fin.open("Airship.txt",std::ios::in);
    if(!fin.is_open())
    {
        std::cout<<"������ �������� �����!"<<std::endl;
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
