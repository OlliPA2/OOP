#include <iostream>
#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

int main()
{
    Asiakas Aapeli("Aapeli", 1000);
    Aapeli.showSaldo();

    cout << "" << endl;

    Aapeli.talletus(250);
    Aapeli.LuotonNosto(150);
    Aapeli.showSaldo();

    cout << "" << endl;

    Asiakas Bertta("Bertta", 1000);
    Bertta.showSaldo();

    cout << "" << endl;
    cout << "Aapeli" << endl;
    Aapeli.showSaldo();
    Aapeli.tilisiirto(50, Bertta);
    Bertta.showSaldo();
}
