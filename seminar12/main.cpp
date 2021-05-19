#include <iostream>
#include "Agenda.h"
#include "Contact.h"
#include "Cunoscut.h"
#include "Prieten.h"
#include "Coleg.h"
using namespace std;

int main()
{
    Prieten p ("Bogdan", "17.08.2001","07384384823", "On earth");
    Coleg c("Cutarescu", "Bit","094823902", "On mars");
    Cunoscut cun("HelloWorld", "043942423490");
    Agenda agenda;
    agenda.addContact(p);
    agenda.addContact(c);
    agenda.addContact(cun);

    cout << '\n';
    return 0;
}