#ifndef TEHTAVA_H
#define TEHTAVA_H
#include <iostream>
using namespace std;

class Tehtava
{
public:
    Tehtava();
};


class Chef
{
    protected:
    string chefName;
    public:
    Chef(string name){
      chefName = name; cout << "Chef " << name << " luotu\n" << endl;
    }

    ~Chef() {
        cout << "Chef tuhottu\n" << endl;
    }

    string getName(){
        return chefName;
    }

    int makeSalad(int maara){
        int annokset = maara/5;
        cout << "sait " << annokset << " salaatti annosta."<< endl;
        return annokset;
    }
    int makeSoup(int maara){
        int annokset = maara/3;
        cout << "sait " << annokset << " soppa annosta." << endl;
        return annokset;
        return annokset;
    }
};


class ItalianChef : public Chef
{
    private:
    string password = "pizza";
    int flour;
    int water;

    int makePizza(){
        int annokset = min(flour / 5, water / 5);
        cout << "sait " << annokset << " pizzaa!" << endl;
        return annokset;
    }
    public:

    ItalianChef(string name) : Chef(name){
        chefName = name; cout << "ItalianChef luotu\n" << endl;
    }

    ~ItalianChef() {
        cout << "ItalianChef tuhottu\n" << endl;
    }

    bool askSecret(string pass, int f, int w){
        if(pass == password){
            flour = f;
            water = w;
            makePizza();
            return true;
        }
        else{
            cout << "Vaara salasana!" << endl;
            return false;
        }
    }
};





#endif // TEHTAVA_H
