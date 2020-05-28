#include "Poisk.h"

namespace MyInterface
{
    My_interface::My_interface()
{

}

void My_interface:: Menu(MY_list <Train> trn1, MY_list <Bus> bus1, MY_list <Airship> air1, MY_list <Plane> pln1)
{
    std::cout<<"----------------------------------------------------------------------------" << std:: endl;
    std::cout<<"Курсовая работа по дисциплине Основы программирования"<< std::endl;
    std::cout<<"Тема: Связный список"<< std:: endl;
    std::cout<<"Выполнил: студент группы ИСТбд-41 Тюкаев Р.И."<< std:: endl;
    std::cout<<"----------------------------------------------------------------------------" << std:: endl << std:: endl;
    std::cout<<"Меню: "<<std::endl;
    std::cout<<"1. Вывести весь доступный транспорт "<<std::endl;
    std::cout<<"2. Добавить новый транспорт "<<std::endl;
    std::cout<<"3. Удалить определенный транспорт "<<std::endl;
    std::cout<<"4. Найти определенный транспорт по параметру\n   или все транспорт определенного класса: "<<std::endl;
    std::cout<<"5. Выход "<<std::endl << std:: endl;

    int counter0;
    std::cin>>counter0;
    while(counter0!=5)
    {
        switch(counter0)
        {
/*------------------------------------------------------------------------------------*/
            case 5:
            break;
/*------------------------------------------------------------------------------------*/
            case 1:
                std::cout<<"\nПоезда: \n"<<std::endl;
                if(trn1.Load_List_Train(trn1)==1)
                {
                    Train trn2;
                    trn2.information();
                    std:: cout << std:: endl;
                    trn1.Print();
                    trn1.clear();
                }
                std::cout<<"\nАвтобусы: \n"<<std::endl;
                if(bus1.Load_List_Bus(bus1)==1)
                {
                    Bus bus2;
                    bus2.information();
                    std:: cout << std:: endl;
                    bus1.Print();
                    bus1.clear();
                }

                 std::cout<<"\nАккумуляторные: \n"<<std::endl;
                if(air1.Load_List_Airship(air1)==1)
                {
                    Airship air2;
                    air2.information();
                    std:: cout << std:: endl;
                    air1.Print();
                    air1.clear();
                }

                std::cout<<"\nСамолеты: \n"<<std::endl;
                if(pln1.Load_List_Plane(pln1)==1)
                {
                    Plane pln2;
                    pln2.information();
                    std:: cout << std:: endl;
                    pln1.Print();
                    pln1.clear();
                }
                break;
/*------------------------------------------------------------------------------------*/
        case 2:
            std::cout << std:: endl;
            std::cout<<"Выберите действие: "<<std::endl;
            std::cout<<"1. Заполнить данные нового транспорта "<<std::endl;
            std::cout<<"2. Выход "<<std::endl << std::endl;
            int counter1;
            std::cin>>counter1;
            while(counter1!=2)
                {
                  switch(counter1)
                  {
                  case 2:
                    break;
                  case 1:
                    {
                    std::cout << std:: endl;
                    std::cout<<"Выберите действие: "<<std::endl;
                    std::cout<<"1. Добавить новый поезд "<<std::endl;
                    std::cout<<"2. Добавить новый автобус"<<std::endl;
                    std::cout<<"3. Добавить новый самолет "<<std::endl;
                    std::cout<<"4. Добавить новый дирижабль "<<std::endl;
                    std::cout<<"5. Выход "<<std::endl << std::endl;
                    int counter4;
                    std::cin>>counter4;
                    switch(counter4)
                    {
                        case 5:
                            break;
                        case 1:
                            {
                                if(trn1.Load_List_Train(trn1)==1)
                                {
                                    std::cout << std:: endl;
                                    Train trn2;
                                    trn2.set_power();
                                    trn2.set_year();
                                    trn2.set_manufacturer();
                                    trn2.set_country();
                                    trn2.set_base();
                                    trn2.set_volume();
                                    trn2.set_vags();
                                    trn1.addLast(trn2);
                                    trn1.Save_List_Train(trn1);
                                    trn1.clear();
                                    std:: cout << std:: endl << "Трансопрт добавлен в список" << std:: endl;
                                }
                                break;
                            }
                        case 2:
                            {
                                if(bus1.Load_List_Bus(bus1)==1)
                                {
                                    std::cout << std:: endl;
                                    Bus bus2;
                                    bus2.set_power();
                                    bus2.set_year();
                                    bus2.set_manufacturer();
                                    bus2.set_country();
                                    bus2.set_base();
                                    bus2.set_volume();
                                    bus2.set_gears();
                                    bus1.addLast(bus2);
                                    bus1.Save_List_Bus(bus1);
                                    bus1.clear();
                                    std:: cout << std:: endl << "Трансопрт добавлен в список" << std:: endl;
                                }
                                break;
                            }
                        case 3:
                            {
                                if(air1.Load_List_Airship(air1)==1)
                                {
                                    std::cout << std:: endl;
                                    Airship air2;
                                    air2.set_power();
                                    air2.set_year();
                                    air2.set_manufacturer();
                                    air2.set_country();
                                    air2.set_high();
                                    air2.set_runway();
                                    air2.set_gas();
                                    air1.addLast(air2);
                                    air1.Save_List_Airship(air1);
                                    air1.clear();
                                    std:: cout << std:: endl << "Трансопрт добавлен в список" << std:: endl;
                                }
                                break;
                            }
                        case 4:
                            {
                                if(pln1.Load_List_Plane(pln1)==1)
                                {
                                    std::cout << std:: endl;
                                    Plane pln2;
                                    pln2.set_power();
                                    pln2.set_year();
                                    pln2.set_manufacturer();
                                    pln2.set_country();
                                    pln2.set_high();
                                    pln2.set_runway();
                                    pln2.set_way_type();
                                    pln1.addLast(pln2);
                                    pln1.Save_List_Plane(pln1);
                                    pln1.clear();
                                    std:: cout << std:: endl << "Трансопрт добавлен в список" << std:: endl;
                                }
                                break;
                            }
                        default: std::cout<< std:: endl << "Введено неверное значение! Повторите попытку!" <<std::endl; break;
                    }
                    break;
                }
                    default: std::cout<< std:: endl << "Введено неверное значение! Повторите попытку!" <<std::endl; break;
            }
                std::cout << std:: endl;
                std::cout<<"Выберите действие: "<<std::endl;
                std::cout<<"1. Заполнить данные нового транспорта "<<std::endl;
                std::cout<<"2. Выход "<<std::endl << std::endl;
                std::cin>>counter1;
        }
            break;
/*------------------------------------------------------------------------------------*/
        case 3:
                    std::cout << std:: endl;
                    std::cout<<"Выберите действие: "<<std::endl;
                    std::cout<<"1. Удалить последний поезд "<<std::endl;
                    std::cout<<"2. Удалить последний автобус "<<std::endl;
                    std::cout<<"3. Удалить последний самолет "<<std::endl;
                    std::cout<<"4. Удалить последний дирижабль "<<std::endl;
                    std::cout<<"5. Выход "<<std::endl << std::endl;
                    int counter3;
                    std::cin>>counter3;
         while(counter3!=5)
            {
                switch(counter3)
                    {
                        case 5:
                            break;
                        case 1:
                            {
                                if(trn1.Load_List_Train(trn1)==1)
                                {
                                    if(trn1.GetCount()!=0)
                                    {
                                        trn1.delLast();
                                        trn1.Save_List_Train(trn1);
                                        std:: cout << std:: endl << "Трансопрт удален!" << std:: endl;
                                    }
                                    else std::cout<<"Список пуст!"<<std::endl;
                                    trn1.clear();
                                }
                                break;
                            }
                        case 2:
                            {
                                if(bus1.Load_List_Bus(bus1)==1)
                                {
                                    if(bus1.GetCount()!=0)
                                    {
                                        bus1.delLast();
                                        bus1.Save_List_Bus(bus1);
                                         std:: cout << std:: endl << "Трансопрт удален!" << std:: endl;
                                    }
                                    else std::cout<<"Список пуст!"<<std::endl;
                                    bus1.clear();
                                }
                                break;
                            }
                        case 3:
                            {
                                if(air1.Load_List_Airship(air1)==1);
                                {
                                    if(air1.GetCount()!=0)
                                    {
                                        air1.delLast();
                                        air1.Save_List_Airship(air1);
                                         std:: cout << std:: endl << "Трансопрт удален!" << std:: endl;
                                    }
                                    else std::cout<<"Список пуст!"<<std::endl;
                                    air1.clear();
                                }
                                break;
                            }
                        case 4:
                            {
                                if(pln1.Load_List_Plane(pln1)==1)
                                {
                                    if(pln1.GetCount()!=0)
                                    {
                                        pln1.delLast();
                                        pln1.Save_List_Plane(pln1);
                                         std:: cout << std:: endl << "Трансопрт удален!" << std:: endl;
                                    }
                                    else std::cout<<"Список пуст!"<<std::endl;
                                    pln1.clear();
                                }
                                break;
                            }

                        default: std::cout<< std:: endl << "Введено неверное значение! Повторите попытку!" <<std::endl; break;
                    }
                    std::cout << std:: endl;
                    std::cout<<"Выберите действие: "<<std::endl;
                    std::cout<<"1. Удалить последний поезд "<<std::endl;
                    std::cout<<"2. Удалить последний автобус "<<std::endl;
                    std::cout<<"3. Удалить последний самолет "<<std::endl;
                    std::cout<<"4. Удалить последний дирижабль "<<std::endl;
                    std::cout<<"5. Выход "<<std::endl << std::endl;
                    std::cin>>counter3;
            }
            break;
/*------------------------------------------------------------------------------------*/
    case 4:
                int counter2;
                std::cout << std:: endl;
                std::cout<<"Выберите действие: "<<std::endl;
                std::cout<<"1. Вывести все поезда: "<<std::endl;
                std::cout<<"2. Вывести все автобусы: "<<std::endl;
                std::cout<<"3. Вывести все самолеты: "<<std::endl;
                std::cout<<"4. Вывести все дирижабли: "<<std::endl;
                std::cout<<"5. Поиск транспорта по производителю: "<<std::endl;
                std::cout<<"6. Выход "<<std::endl << std::endl;
                std::cin>>counter2;
        while(counter2!=6)
        {
                switch(counter2)
                {
                    case 6:
                        break;
                    case 1:
                        if(trn1.Load_List_Train(trn1)==1)
                        {
                            std::cout<<"\nПоезда: \n"<<std::endl;
                            Train trn2;
                            trn2.information();
                            std:: cout << std:: endl;
                            trn1.Print();
                            trn1.clear();
                        }
                        break;
                    case 2:
                        if(bus1.Load_List_Bus(bus1)==1)
                        {
                            std::cout<<"\nАвтобусы: \n"<<std::endl;
                            Bus bus2;
                            bus2.information();
                            std:: cout << std:: endl;
                            bus1.Print();
                            bus1.clear();
                        }
                        break;
                    case 3:
                        if(air1.Load_List_Airship(air1)==1)
                        {
                            std::cout<<"\nДирижабли \n"<<std::endl;
                            Airship air2;
                            air2.information();
                            std:: cout << std:: endl;
                            air1.Print();
                            air1.clear();
                        }
                        break;
                    case 4:
                        if(pln1.Load_List_Plane(pln1)==1)
                        {
                            std::cout<<"\nСамолеты: \n"<<std::endl;
                            Plane pln2;
                            pln2.information();
                            std:: cout << std:: endl;
                            pln1.Print();
                            pln1.clear();
                        }
                        break;

                    case 5:
                    {
                        std::cout << std:: endl;
                        std::cout<<"Выберите действие: "<<std::endl;
                        std::cout<<"1. Найти поезда "<<std::endl;
                        std::cout<<"2. Найти автобусы "<<std::endl;
                        std::cout<<"3. Найти самолеты "<<std::endl;
                        std::cout<<"4. Найти дирижабли "<<std::endl;
                        std::cout<<"5. Выход "<<std::endl << std::endl;
                        int counter5;
                        std::cin>>counter5;
                        std:: cout << std:: endl;
                        My_menu mn;
                        switch(counter5)
                            {
                                case 5:
                                    break;
                                case 1:
                                    if(trn1.Load_List_Train(trn1)==1)
                                    {
                                        if(mn.Poisk(trn1)!=1)
                                            std::cout << std:: endl << "Трансопрт не найден!"<<std::endl;
                                        trn1.clear();
                                    }
                                    break;
                                case 2:
                                    if(bus1.Load_List_Bus(bus1)==1)
                                    {
                                        if(mn.Poisk(bus1)!=1)
                                            std::cout << std:: endl << "Трансопрт не найден!"<<std::endl;
                                        bus1.clear();
                                    }
                                    break;
                                case 3:
                                    if(air1.Load_List_Airship(air1)==1)
                                    {
                                        if(mn.Poisk(air1)!=1)
                                            std::cout << std:: endl << "Трансопрт не найден!"<<std::endl;
                                        air1.clear();
                                    }
                                    break;
                                case 4:
                                    if(pln1.Load_List_Plane(pln1)==1)
                                    {
                                        if(mn.Poisk(pln1)!=1)
                                            std::cout << std:: endl << "Трансопрт не найден!"<<std::endl;
                                        pln1.clear();
                                    }
                                    break;
                                default: std::cout << std:: endl << "Введено неверное значение! Повторите попытку!" <<std::endl; break;
                            }
                        break;
                    }
                    default: std::cout << std:: endl << "Введено неверное значение! Повторите попытку!" <<std::endl; break;
                }
                std::cout << std:: endl;
                std::cout<<"Выберите действие: "<<std::endl;
                std::cout<<"1. Вывести все поезда: "<<std::endl;
                std::cout<<"2. Вывести все автобусы: "<<std::endl;
                std::cout<<"3. Вывести все самолеты: "<<std::endl;
                std::cout<<"4. Вывести все дирижабли: "<<std::endl;
                std::cout<<"5. Поиск транспорта по производителю: "<<std::endl;
                std::cout<<"6. Выход "<<std::endl << std::endl;
                std::cin>>counter2;
        }
        break;
        default: std::cout<< std:: endl << "Введено неверное значение! Повторите попытку!" <<std::endl; break;
/*------------------------------------------------------------------------------------*/
        }
            std::cout << std:: endl;
            std::cout<<"Выберите действие: "<<std::endl;
            std::cout<<"1. Вывести весь транспорт "<<std::endl;
            std::cout<<"2. Добавить новый транспорт "<<std::endl;
            std::cout<<"3. Удалить определенный транспорт "<<std::endl;
            std::cout<<"4. Найти определенный транспорт по параметру\n   или все транспорт определенного класса: "<<std::endl;
            std::cout<<"5. Выход "<<std::endl << std:: endl;
            std::cin>>counter0;

    }

}

}

