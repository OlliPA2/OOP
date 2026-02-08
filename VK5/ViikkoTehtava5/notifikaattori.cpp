#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {

}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    cout << "Notifikaattori lisaa seuraajan " << uusiSeur->getNimi() << endl;
    uusiSeur->next = seuraajat;
    seuraajat = uusiSeur;

}

void Notifikaattori::poista(Seuraaja *poistaSeur)
{
    cout << "notifikaattori poistaa seuraajan: " << poistaSeur->getNimi() << endl;
    if (seuraajat == nullptr){
        return;
    }
    if(seuraajat == poistaSeur){
        seuraajat = seuraajat->next;
        return;
    }

    Seuraaja* edellinen = seuraajat;
    while (edellinen->next != nullptr && edellinen->next != poistaSeur) {
        edellinen = edellinen->next;
    }
    if(edellinen->next == poistaSeur){
        edellinen->next = poistaSeur->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        cout <<"Seuraaja: " << alku->getNimi() << endl;
        alku = alku ->next;
    }
}

void Notifikaattori::postita(string v)
{
    cout << "notifikaattori postaa viestin " << v << endl;

    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        alku->paivitys(v);
        alku = alku->next;
    }
}
