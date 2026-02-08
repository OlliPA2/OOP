#include "seuraaja.h"

Seuraaja::Seuraaja(string n) {
    nimi = n;
    cout << "uusi seuraaja luotu nimella " << nimi << endl;
}

string Seuraaja::getNimi(){
    return nimi;
}

void Seuraaja::paivitys(string viesti){
    cout << nimi << " sai viestin: " << viesti << endl;
}
