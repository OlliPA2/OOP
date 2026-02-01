#include "luottotili.h"

Luottotili::Luottotili(string name, double luotto) : Pankkitili(name){
    cout << "Luottotili: " << "Luottotili perustettu nimellä: " << name << ", luottoraja: " << luotto << endl;

    luottoRaja = -luotto;
    saldo = luotto;
}

bool Luottotili::withdraw(double amount)
{
    if (amount < 0){
        cout << "Luottotili: " << "et voi nostaa negatiivista summaa." << endl;
        return false;
    }
    if(saldo-amount < luottoRaja){
        cout << "Luottotili: " << "Luottorajasi ei riita." << endl;
        return false;
    }
    else{
        saldo = saldo - amount;
        cout << "Luottotili: " << amount << "e nosto onnistui." << " Luottoa jäljellä: " << saldo << "e" << endl;
        return true;
    }
}

bool Luottotili::deposit(double amount)
{
    if (amount < 0){
        cout << "Luottotili: " << "et voi tallettaa negatiivista summaa." << endl;
        return false;
    }
    if (saldo+amount >0){
        cout << "Luottotili: " << "et voi tallettaa liikaa. Sinun pitää tallettaa" << -saldo << " kuitataksesi velka" << endl;
        return false;
    }
    else{
        saldo = saldo + amount;
        cout << "Luottotili: " << amount << "e talletus onnistui. Velkaa jäljellä: " << saldo << endl;
        return true;
    }
}

double Luottotili::getBalance()
{
    return saldo;
}
