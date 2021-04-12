#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <fstream>

using namespace std;


void clearScreen()
{
    ifstream fin ("dungeonGame.txt");
    char ascii;

    if (system("CLS")) system("clear");

    while(fin >> noskipws >> ascii)
    {
        cout << ascii;
    }

}

int test(int a)
{

}

int healPlayer(int a)
{
    srand (time(NULL));

    int hpHealed = rand() % (50 - 35 + 1) + 35;
    a += hpHealed;

    return a;
}
int healBoss(int bossHp)
{
    //srand (time(NULL));
    //int hpHealed = rand() % (55 - 35 + 1) + 35;
    //bossHp = bossHp + hpHealedb;
    //return bossHp;
}
int damageToBoss(int bossHp)
{


}
int damageToPlayer(int playerHp)
{

}

int main()
{

    char option;
    string playerName, startOption, option1;
    int playerHP = 150, bossHP = 165;
    int bossDecisionInt; ///false == heal --- true == attack


    cout << "Enter your name to continue: ";
    cin >> playerName;

    clearScreen();

    while(true)
    {
        clearScreen();
        cout << endl << "Welcome, " << playerName << "!" << endl << endl;
        cout << "    Press '1' to start the game" << endl << "    Press '2' to start the tutorial" << endl << "    Press '3' for credits!" << endl;
        option = getch();

        if (option == '1') /// game start
        {
            clearScreen();
            cout << endl;
            cout << "Boss: You will never defeat me!" << endl << endl;

            while(playerHP != 0 && bossHP != 0)
            {
                ///boss decides
                bossDecisionInt = 1;

                if(bossDecisionInt == 1)
                {
                    damageToPlayer(playerHP);
                    cout << "Boss attacked you!" << endl;
                    cout << "You now have " << playerHP << "HP!" << endl;
                }
                else
                {
                    healBoss(bossHP);
                    cout << "Boss healed!" << endl;
                }

                cout << "-------";

                cout << endl << "ATTACK OR HEAL?" << endl;
                option = getch();
                clearScreen();
                if(option == 'e' || option == 'E')
                {
                    damageToBoss(bossHP);
                    cout << endl << "You attacked boss." << endl;
                    cout << "Boss is now on " << bossHP << " HP." << endl;
                }
                else if(option == 'q' || option == 'Q')
                {
                    healPlayer(playerHP);
                    cout << endl << "You drank a potion of healing. " << endl;
                    cout << "You are now on " << playerHP << " HP." << endl;
                }
                cout << "-------" << endl;
            }
            if (bossHP == 0)
            {
                cout << "Boss died." << endl;
                cout << "You win!" << endl << endl;
                cout << "(press anything to go back to the main menu)" << endl;
                option = getch();
            }
            else
            {
                cout << "You died." << endl;
                cout << "You lost!" << endl << endl;
                cout << "(press anything to go back to the main menu)" << endl;
                option = getch();
            }

        }

        else if(option == '2') /// start tutorial
        {
            clearScreen();
            cout << endl << "Hello " << playerName << "!";
            cout << " I will teach you the basics of Dungeon Game!" << endl << endl << "(press any key to continue)" << endl;
            option = getch();
            clearScreen();

            cout <<  endl << "In Dungeon Game, you will experience multiple adventures while fighting enemies and bosses!" << endl << "(press anything to continue)" << endl << endl;
            option = getch();
            clearScreen();

            cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
            cout << "(press anything to continue)" << endl;
            option = getch();
            clearScreen();

            cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
            cout << endl << endl <<"To HEAL, you need to press 'q'." << endl << "Try it right now!" << endl;
            option = getch();

            while (option != 'q' && option != 'Q')
            {
                clearScreen();
                cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
                cout << endl << endl << "To HEAL, you need to press 'q'." << endl << "Try it right now!" << endl;
                cout << endl << "Wrong button :(" << endl << "Try again!" << endl;
                option = getch();
            }
            clearScreen();

            cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
            cout << endl << endl << "To HEAL, you need to press 'q'." << endl << "Try it right now!" << endl;

            cout << "----------" << endl;
            cout << "Perfect! You healed." << endl << "Let's move on to the next step." << endl << endl;

            cout << "To ATTACK, you need to press 'e'." << endl << "Try it!" << endl;
            option = getch();
            while (option != 'e' && option != 'E')
            {
                clearScreen();
                cout << endl << "While fighting, you have 2 options: ATTACK or HEAL." << endl << "    'ATTACK' will give a random amount of damage to the person you're fighting. " << endl << "    'HEAL' will give a random amount of HP to you, " << playerName << "!" << endl;
                cout << endl << endl << "To HEAL, you need to press 'q'." << endl << "Try it right now!" << endl << endl;
                cout << "----------" << endl;
                cout << "Perfect! You healed." << endl << "Let's move on to the next step." << endl << endl;
                cout << "To ATTACK, you need to press 'e'." << endl << "Try it!" << endl;
                cout << endl << "Wrong button :/" << endl << "Try again!" << endl;
                option = getch();
            }
            cout << endl << "Perfect!" << endl;
            cout << "(press anything to continue)" << endl;
            option = getch();

            clearScreen();

            cout << endl << "Well, that's it!" << endl << "You now know how to play Dungeon Game!" << endl << endl;
            cout << "Press anything to go back to the main menu!" << endl;
            option = getch();
            clearScreen();

        }

        else if(option == '3')
        {
            clearScreen();
            cout << endl << "       ==MADE BY:==" << endl << "@Stefan360 & @victor-exe" << endl << endl;
            cout << "(press anything to go in main menu)" << endl;
            option = getch();
            clearScreen();
        }



        else
        {
            clearScreen();
            cout << endl << endl << "Invalid command." << endl;
        }
    }
}
