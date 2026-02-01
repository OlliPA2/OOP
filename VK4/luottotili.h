#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili(string name, double luotto);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    double getBalance();
protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H
