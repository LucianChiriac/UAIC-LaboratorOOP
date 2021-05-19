#include "Agenda.h"

Agenda::Agenda()
{

}
Contact* Agenda::searchByName(std::string name)
{
    for(auto idx: this->agenda)
    {
        // if(*(idx).name==name)
        //     return *idx;
    }
    return nullptr;
}
std::vector<Contact*> Agenda::getFriendList()
{

}
bool Agenda::deleteByName(std::string)
{

}
void Agenda::addContact(const Contact& __contact)
{
    this->agenda.push_back(__contact);
}