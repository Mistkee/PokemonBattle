#include "Battle.h"

Battle::Battle()
{
}

Battle::Battle(Trainer mainCharacter)
{
    thePlayer = mainCharacter;
}

void Battle::Adventure()
{
    cout << "You decided to explore the world with your companion(s), what will be your next stop ? \n 0 : Challenge another Trainer \n 1 : Capture a wild Pokemon \n 2 : Rest \n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case(0):
        cout << "You challenge a trainer.";
        BattleTrainer();
        break;
    case(1):
        
        break;
    case(2):
        

    default:
        break;
    }

}

void Battle::BattleTrainer()
{
    bool start, choosingActions;
    int choice;
    Pokemon chosenPkmn;

    
    vector<Pokemon>fabriceTeam = { Pokemon("Luvdisc", PokeType::Water, 25, (vector<Abilities> {Abilities("Bubble",40, PokeType::Water, 30), Abilities("Clamp", 35, PokeType::Water, 15)})) };
    Trainer fabrice = Trainer("Fabrice", "Laglisse", "Hum, I think I'm lost",fabriceTeam);
    cout << "You decided to challenge a Trainer " << endl;
    fabrice.Introduction();

    cout << "They choose " << fabriceTeam[0].PokeName() << endl;
    cout << "Who do you want to choose ?"<< endl;

    for (int i = 0; i < thePlayer.Team().size(); i++)
    {
        cout << i << " : ";
        thePlayer.GetPokemonInTeam(i);
        cout << endl;
    }
    cin >> choice;
    chosenPkmn = thePlayer.Team()[choice];
    cout << "You chose : ";
    thePlayer.GetPokemonInTeam(choice);
    cout << endl;

    cout << "What are you going to do ?  \n 0 : Attack \n 1 : Switch \n 2 : Pokeball \n 3 : Run Away \n";
    cin >> choice;
    switch (choice)
    {
    case(0):
        chosenPkmn.DisplayMoves();
        break;

    case(1):
        cout << "Who do you want to choose ?" << endl;

        for (int i = 0; i < thePlayer.Team().size(); i++)
        {
            cout << i << " : ";
            thePlayer.GetPokemonInTeam(i);
            cout << endl;
        }
        cin >> choice;
        chosenPkmn = thePlayer.Team()[choice];
        break;

    case(2):

        break;

    case(3):
        break;

    default:
        break;
    }
   

}

