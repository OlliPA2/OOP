#include "game.h"

Game::Game(int mn) {
    maxNumber = mn;

    cout << "maksimi luku on "
         << maxNumber
         << endl;
}

Game::~Game()
{

}

void Game::play()
{

    srand(time(NULL));
    randomNumber = rand() %maxNumber;

    while(playerGuess != randomNumber){
        cout << "arvaa luku 1-" << maxNumber << endl;
        cin >> playerGuess;

        if(playerGuess == randomNumber){
            cout << "Arvasit oikein!" << endl;
        }
        if(playerGuess > randomNumber){
            cout << "Arvasit liian suuren luvun." << endl;
        }
        if(playerGuess < randomNumber){
            cout << "Arvasit liian pienen luvun." << endl;
        }
        numOfGuesses++;
    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "sinulla meni " << numOfGuesses << " arvausta" << endl;

}
