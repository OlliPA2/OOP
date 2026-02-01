#include "asiakas.h"

Asiakas::Asiakas(string name, double luotto) : kayttotili(name), luottotili(name, luotto) {
    nimi = name;

    cout << "Asiakkuus luoto nimellä " << nimi << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Käyttötilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double amount)
{
    bool status = kayttotili.deposit(amount);
    return status;
}

bool Asiakas::nosto(double amount)
{
    bool status = kayttotili.withdraw(amount);
    return status;
}

bool Asiakas::luotonMaksu(double amount)
{
    bool status = luottotili.deposit(amount);
    return status;
}

bool Asiakas::LuotonNosto(double amount)
{
    bool status = luottotili.withdraw(amount);
    return status;
}

bool Asiakas::tilisiirto(double amount, Asiakas &saaja)
{
    bool status = nosto(amount);

    if (status == true){
        cout << "Pankkitili: " << nimi << " Siirtää " << amount << " käyttäjälle " << saaja.nimi << endl;
        saaja.talletus(amount);
    }
    else{
        cout << "Tilisiirto epäonnistui." << endl;
    }
    return status;
}
