#include <iostream>
#include <tehtava.h>

using namespace std;

int main()
{
    Chef c("gordon");
    c.makeSalad(20);
    c.makeSoup(15);
    ItalianChef ic("mario");
    cout << "Kokin nimi: " << ic.getName() << endl;
    ic.makeSalad(20);
    ic.makeSoup(15);

    bool success = ic.askSecret("pizza", 20, 15);
    if (!success) {
        cout << "Failed to make pizza." << endl;
    }

    ic.askSecret("wrong", 20, 15);
    return 0;
}
