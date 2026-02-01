#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class Pankkitili
{
protected:
    string omistaja;
    double saldo = 0;


public:
    Pankkitili(string name);
    virtual bool withdraw(double amount);
    virtual bool deposit(double amount);
    double getBalance();
};

#endif // PANKKITILI_H
