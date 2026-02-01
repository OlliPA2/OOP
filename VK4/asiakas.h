#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>

#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
public:
    Asiakas(string name, double luotto);
    string getNimi();
    void showSaldo();
    bool talletus (double amount);
    bool nosto (double amount);
    bool luotonMaksu (double amount);
    bool LuotonNosto (double amount);
    bool tilisiirto(double amount, Asiakas &saaja);

private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
