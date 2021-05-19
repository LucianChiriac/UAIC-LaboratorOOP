#pragma once
#include "Contact.h"
#include <vector>
#include <string>

class Agenda {
    std::vector<Contact*> agenda;

public:
    Agenda();
    Contact* searchByName(std::string);
    std::vector<Contact*> getFriendList();
    bool deleteByName(std::string);
    bool addContact(const Contact&);
};