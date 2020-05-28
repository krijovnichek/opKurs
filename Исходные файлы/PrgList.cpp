#include "PrgList.h"

namespace MyList
{
template <typename T>
MY_list<T>::MY_list(const MY_list<T> &object):
head(NULL), tail(NULL), count(0)
{
    Node<T>* tmp = object.head;
    while (tmp != NULL)
    {
        this->addLast(tmp->data);
        tmp = tmp->next;
    }

}
/*----------------------------------------------------------------------------*/
template <typename T>
int MY_list<T>:: GetCount()
{
    return count;
}
/*----------------------------------------------------------------------------*/
template <typename T>
bool MY_list<T>:: empty()
{
    return count == 0;
}
/*----------------------------------------------------------------------------*/
template <typename T>
MY_list<T>::~MY_list()
{
    while (! this->empty())
    {this->delFirst();}
}
template <typename T>
void MY_list<T>::clear()
{
    while (! this->empty())
    {this->delFirst();}
}
/*----------------------------------------------------------------------------*/
template <typename T>
void MY_list<T>::addLast(T d)
{
    Node<T>* new_tail = new Node<T>(d, NULL);
    if (this->empty())
    {head = new_tail;}
    else
    {tail->next = new_tail;}

    tail = new_tail;
    count++;
}
/*----------------------------------------------------------------------------*/
template <typename T>
void MY_list<T>:: delFirst()
{
    assert(head != NULL);
    Node<T>* old_head = head;
    if (count == 1)
    {
        head = NULL;
        tail = NULL;
    }
    else {head = head->next;}

    delete old_head;
    count--;
}
/*----------------------------------------------------------------------------*/
template <typename T>
void MY_list<T>:: delLast(void)
{
    assert(tail != NULL);
    Node<T>* old_tail = tail;
    if (this->GetCount() == 1)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        Node<T>* current = head;
        while (current->next != tail)
        {current = current->next;}
        current->next = NULL;
        tail = current;
    }
    delete old_tail;
    count--;
}
/*----------------------------------------------------------------------------*/
template <typename T>
void MY_list<T>::Print()
{
    Node<T>* tmp = head;
    if (tmp != NULL)
    {
        while (tmp!= NULL)
        {
            std::cout << tmp->data;
            tmp = tmp->next;
        }
    }
    if (this->GetCount() == 0)
    {
        std::cout<<"Список пуст!"<<std::endl;
    }
}
/*----------------------------------------------------------------------------*/
template <typename T>
int MY_list<T>::Load_List_Train(MY_list<T> &object)
{
    std::ifstream f;
    T g;
    f.open("Train.txt",std::ios::in);
    if(!f.is_open())
    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        return 0;
    }
    else
    while(f.read((char*)&g,sizeof(T)))
    {
        object.addLast(g);
    }
    f.close();
    return 1;
}
/*----------------------------------------------------------------------------*/
template <typename T>
int MY_list<T>::Load_List_Bus(MY_list<T> &object)
{
    std::ifstream f;
    T g;
    f.open("Bus.txt",std::ios::in);
    if(!f.is_open())
    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        return 0;
    }
    else
    while(f.read((char*)&g,sizeof(T)))
    {
        object.addLast(g);
    }
    f.close();
    return 1;
}
/*----------------------------------------------------------------------------*/
template <typename T>
int MY_list<T>::Load_List_Airship(MY_list<T> &object)
{
    std::ifstream f;
    T g;
    f.open("Airship.txt",std::ios::in);
    if(!f.is_open())
    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        return 0;
    }
    else
    while(f.read((char*)&g,sizeof(T)))
    {
        object.addLast(g);
    }
    f.close();
    return 1;
}
/*----------------------------------------------------------------------------*/
template <typename T>
int MY_list<T>::Load_List_Plane(MY_list<T> &object)
{
    std::ifstream f;
    T g;
    f.open("Plane.txt",std::ios::in);
    if(!f.is_open())
    {
        std::cout<<"Ошибка открытия файла!"<<std::endl;
        return 0;
    }
    else
    while(f.read((char*)&g,sizeof(T)))
    {
        object.addLast(g);
    }
    f.close();
    return 1;
}
/*----------------------------------------------------------------------------*/
template <typename T>
void MY_list<T>::Save_List_Train(MY_list<T> object)
{
    Node<T>* tmp = head;
    std::ofstream f;
    f.open("Train.txt",std::ios::out|std::ios::trunc);
    if (tmp != NULL)
    {
        while (tmp!= NULL)
        {
           f.write((char*)&tmp->data,sizeof(T));
           tmp = tmp->next;
        }
    f.close();
    }
}
/*----------------------------------------------------------------------------*/
template <typename T>
void MY_list<T>::Save_List_Bus(MY_list<T> object)
{
    Node<T>* tmp = head;
    std::ofstream f;
    f.open("Bus.txt",std::ios::out|std::ios::trunc);
    if (tmp != NULL)
    {
        while (tmp!= NULL)
        {
           f.write((char*)&tmp->data,sizeof(T));
           tmp = tmp->next;
        }
    f.close();
    }
}
/*----------------------------------------------------------------------------*/
template <typename T>
void MY_list<T>::Save_List_Airship(MY_list<T> object)
{
    Node<T>* tmp = head;
    std::ofstream f;
    f.open("Airship.txt",std::ios::out|std::ios::trunc);
    if (tmp != NULL)
    {
        while (tmp!= NULL)
        {
           f.write((char*)&tmp->data,sizeof(T));
           tmp = tmp->next;
        }
    f.close();
    }
}
/*----------------------------------------------------------------------------*/
template <typename T>
void MY_list<T>::Save_List_Plane(MY_list<T> object)
{
    Node<T>* tmp = head;
    std::ofstream f;
    f.open("Plane.txt",std::ios::out|std::ios::trunc);
    if (tmp != NULL)
    {
        while (tmp!= NULL)
        {
           f.write((char*)&tmp->data,sizeof(T));
           tmp = tmp->next;
        }
    f.close();
    }
}
/*----------------------------------------------------------------------------*/
}
