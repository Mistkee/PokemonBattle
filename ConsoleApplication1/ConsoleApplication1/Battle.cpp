#include "Battle.h"

Battle::Battle()
{
}

void Battle::Adventure(Trainer& mainCharacter)
{
    cout << "You decided to explore the world with your companion(s), what will be your next stop ? \n 0 : Challenge another Trainer \n 1 : Capture a wild Pokemon \n 2 : Rest \n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case(0):
        cout << "You challenge a trainer.";
        break;
    case(1):
        
        break;
    case(2):
        

    default:
        break;
    }

}

