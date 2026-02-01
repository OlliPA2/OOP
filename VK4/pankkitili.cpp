#include "pankkitili.h"

Pankkitili::Pankkitili(string name) {
    cout << "Pankkitili: " "pankkitili perustettu nimellä: " << name << endl;
}

bool Pankkitili::withdraw(double amount)
{
    if (amount < 0){
        cout << "Pankkitili: " "et voi nostaa negatiivista summaa." << endl;
        return false;
    }
    if(amount > saldo){
        cout << "Pankkitili: " "Tililläsi ei ole tarpeeksi rahaa." << endl;
        return false;
    }
    else{
        saldo = saldo - amount;
        cout << "Pankkitili: " << amount << "e nosto onnistui." << " tilillä rahaa  jäljellä: " << saldo << "e" << endl;
        return true;
    }
}

bool Pankkitili::deposit(double amount)
{
    if (amount < 0){
        cout << "Pankkitili: " "et voi tallettaa negatiivista summaa." << endl;
        return false;
    }
    else{
        saldo = saldo + amount;
        cout << "Pankkitili: " << amount << "e talletus onnistui. Tililläsi on rahaa: " << saldo << endl;
        return true;
    }
}

double Pankkitili::getBalance()
{
    return saldo;
}
