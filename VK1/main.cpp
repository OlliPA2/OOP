#include <iostream>

using namespace std;

int game(int maxnum);
int main()
{
    int arvaukset = game(40);

    cout << "sinulla meni " << arvaukset << " arvausta" << endl;

}

int game(int maxnum){

    int random;
    int arvaus = 0;
    int arvaukset = 0;

    srand(time(NULL));
    random = rand() %maxnum;

    while(arvaus != random){
        cout << "arvaa luku (1-20)" << endl;

        cin >> arvaus;

        if(arvaus == random){
            cout << "Arvasit oikein!" << endl;
        }
        if(arvaus > random){
            cout << "Arvasit liian suuren luvun." << endl;
        }
        if(arvaus < random){
            cout << "Arvasit liian pienen luvun." << endl;
        }
        arvaukset++;
    }
    return arvaukset;
}

