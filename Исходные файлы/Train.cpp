#include "Train.h"

using namespace TRANSPORT;
Train::Train()
{
    //ctor
}
void Train::information()
{
    std:: cout << "Транспорт" << std:: endl << "-Воздушный" << std:: endl << "--Поезд ";
}

void Train::set_vags()
{
    std:: cout << "Вагоны :" << std:: endl;
    std:: cin >> vags;
}

const char* Train::get_vags()
{
    const char* x;
    x = vags;
    return x;
}

int Train::Loading(Train &x)
{
    std::ifstream fin;
    fin.open("Train.txt",std::ios::in);
    if(!fin.is_open())
    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        return 0;
    }
    else
    fin.read((char*)&x,sizeof(Train));
    fin.close();
    return 1;
}

void Train::Save(Train &x)
{
    std::ofstream fout;
    fout.open("Train.txt",std::ios::out);
    fout.write((char*)&x,sizeof(Train));
    fout.close();
}
