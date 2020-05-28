#include "PrgMenu.h"

namespace MyMenu
{

/*----------------------------------------------------------------------------*/
    My_menu:: My_menu()
{
    //ctor
}

/*----------------------------------------------------------------------------*/
int My_menu:: Poisk(MY_list <Train> object)
{
    MY_list<Train>::iterator it;
    char s[20];
    std::cout<<"Введите название производителя:" << std::endl << std:: endl;
    std::cin>>s;
    for(it=object.begin();it!=NULL;++it)
    {
        if(strspn(it->get_manufacturer(),s)== strlen(it->get_manufacturer()))
        {
            std::cout<<*it;
            return 1;
        }
    }
    return 0;
}

/*----------------------------------------------------------------------------*/
int My_menu:: Poisk(MY_list<Bus> object)
{
    MY_list<Bus>::iterator it;
    char s[20];
    std::cout<<"Введите название производителя:" << std::endl << std:: endl;
    std::cin>>s;
    for(it=object.begin();it!=NULL;++it)
    {
        if(strspn(it->get_manufacturer(),s)== strlen(it->get_manufacturer()))
        {
            std::cout<<*it;
            return 1;
        }
    }
    return 0;
}

/*----------------------------------------------------------------------------*/
int My_menu:: Poisk(MY_list<Airship> object)
{
    MY_list<Airship>::iterator it;
    char s[20];
    std::cout<<"Введите название производителя:" << std::endl << std:: endl;
    std::cin>>s;
    for(it=object.begin();it!=NULL;++it)
    {
        if(strspn(it->get_manufacturer(),s)== strlen(it->get_manufacturer()))
        {
            std::cout<<*it;
            return 1;
        }
    }
    return 0;
}

/*----------------------------------------------------------------------------*/
int My_menu:: Poisk(MY_list <Plane> object)
{
    MY_list<Plane>::iterator it;
    char s[20];
    std::cout<<"Введите название производителя:" << std::endl << std:: endl;
    std::cin>>s;
    for(it=object.begin();it!=NULL;++it)
    {
        if(strspn(it->get_manufacturer(),s)== strlen(it->get_manufacturer()))
        {
            std::cout<<*it;
            return 1;
        }
    }
    return 0;
}


}
