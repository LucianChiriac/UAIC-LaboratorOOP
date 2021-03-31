#include "Masini.h"

Masini::Masini()
{
    rezervor=0;
    putere=0;
}
Masini::Masini(int rezervor,int putere)
{
    this->rezervor = rezervor;
    this->putere = putere;
}
int Masini::getPutere() const
{
    return this->putere;
}
int Masini::getRezervor() const
{
    return this->rezervor;
}
bool Masini::operator<(Masini& m)
{
    return (this->putere < m.getPutere());
}
bool Masini::operator==(Masini& a,Masini& b)
{
    return (this->rezervor == m.getRezervor());
}