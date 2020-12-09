#include "header.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void Yahtzee::rollDice(int dice[])
{
    //int dice[6];
    int index = 0;
    for (index = 0; index < 6; ++index)
    {
        p2dice[index] = rand() % 6 + 1;
    }
}

void Yahtzee::countDice(int dice[], int dice_value_count[])
{
    // int dice[6];
    int index = 0, index2 = 0;
    while (index < 6)
    {
        index2 = p2dice[index++];
        p2dice[index2] += 1;
    }
}

void Yahtzee::holdDie(int p2die_held[], int die[])
{
    // int die[6];
    int noDieHold = 0, numHold = 0, Hold = 0;
    char holdDie = '\0';
    cout << "Do you want to hold any die?" << endl;
    cin >> noDieHold;
    if (holdDie == 'Y' || holdDie == 'y')
    {
        cout << "How many dice do you want to hold?" << endl;
        cin >> numHold;
        for (int count = 1; count < noDieHold + 1; count++)
        {
            cout << "Which dice do you wish to hold?" << endl;
            cin >> numHold;
            if (numHold >= 1 && numHold <= 5)
            {
                numHold[p2die - 1] = p2die[numHold - 1];
            }
        }
        cout << "Dice is held!" << endl;
    }
}

int Yahtzee::sumOne()
{
    //  int numValue = 0;
    p2sumOnes = 1 * p2numValue;
    return p2sumOnes;
}



int Yahtzee::sumTwo()
{
    //int numValue = 0;
    p2sumTwos = 2 * p2numValue;
    return p2sumTwos;
}

int Yahtzee::sumThree()
{
    //int numValue = 0;
    p2sumThrees = 3 * p2numValue;
    return p2sumThrees;
}

int Yahtzee::sumFour()
{
    // int numValue = 0;
    p2sumFours = 4 * p2numValue;
    return p2sumFours;
}

int Yahtzee::sumFive()
{
    // int numValue = 0;
    p2sumFives = 5 * p2numValue;
    return p2sumFives;
}

int Yahtzee::sumSix()
{
    //int numValue = 0;
    p2sumSixs = 6 * p2numValue;
    return p2sumSixs;
}

int Yahtzee::BonusCal()
{
    // int die[6];
    for (int index = 0; index < 6; index++)
    {
        p2bonus += p2die[index];
    }
    return p2bonus;
}

int Yahtzee::threeKind()
{
    //int diceValueCount[6];
    for (int index = 0; index < 6; index++)
    {
        if (p2diceValueCount[index] == 3)
        {
            p2threeOKind = 1;
        }
    }
    return p2threeOKind;
}

int Yahtzee::fourKind()
{
    // int diceValueCount[6];
    for (int index = 0; index < 6; index++)
    {
        if (p2diceValueCount[index] == 4)
        {
            p2fourOKind = 1;
        }
    }
    return p2fourOKind;
}

int Yahtzee::full_House()
{
    // int diceValueCount[6];
    for (int index = 0; index < 6; index++)
    {
        if (p2diceValueCount[index] == 3)
        {
            for (int index2 = 0; index2 < 6; index2++)
            {
                if (p2diceValueCount[index2] == 2)
                {
                    p2fullHouse = 1;
                }
            }
        }
    }
    return p2fullHouse;
}
int Yahtzee::smallStraight()
{
    //  int diceValueCount[6];
    int zero = 0, two = 0, threeAbv = 0;
    for (int index = 1; index < 6; index++)
    {
        if (p2diceValueCount[index > 2])
        {
            threeAbv += 1;
        }
        else if (p2diceValueCount[index] == 2)
        {
            two += 1;
        }
        else if (p2diceValueCount[index] = 0);
        {
            zero += 1;
        }
    }
    if (threeAbv == 0)
    {
        if (zero < 3)
        {
            if (two < 2)
            {
                p2smallSt = 1;
            }
        }
    }
    return p2smallSt;
}

int Yahtzee::largeStraight()
{
    // int diceValueCount[6];
    int zero = 0, twoAbv = 0;
    for (int index = 1; index < 6; index++)
    {
        if (p2diceValueCount[index] > 1)
        {
            twoAbv += 1;
        }
        else if (p2diceValueCount[index] == 0)
        {
            zero += 1;
        }
    }
    if (twoAbv == 0)
    {
        if (zero < 2)
        {
            p2largeSt = 1;
        }
    }
    return p2largeSt;
}

int Yahtzee::Yahtzeee()
{
    //int diceValueCount[6];
    for (int index = 0; index < 6; index++)
    {
        if (p2diceValueCount[index] == 5)
        {
            p2yahtzeeS = 1;
        }
    }
    return p2yahtzeeS;
}

int Yahtzee::chance()
{
    for (int index = 0; index < 6; index++)
    {
        p2chance += p2die[index];
    }
    return p2chance;
}

int Yahtzee::totalScore()
{
    p2totalS = p2sumOnes + p2sumTwos + p2sumThrees + p2sumFours + p2sumFives + p2sumSixs + p2threeOKind + p2fourOKind + p2fullHouse + p2smallSt + p2largeSt + p2yahtzeeS + p2chance + p2bonus;
    return p2totalS;
}

void Yahtzee::reset(int anyArray[], int size)
{

    for (int index = 0; index < 6; index++)
    {
        anyArray[index] = 0;
    }
}
void Yahtzee::playGame()
{
    int die[5] = { 0 }, dieValues[7] = { 0 }, dieHeld[5] = { 0 };
    int rolls = 0, total_score = 0;
    char combo = '\0';
    do
    {
        reset(dieValues, 5);
        system("pause");
        system("cls");
        rollDice(die);
        ++rolls;
        for (int index = 0; index < 5; index++)
        {
            if (dieHeld[index] != 0)
            {
                die[index] = dieHeld[index];
            }
        }
        if (rolls < 3)
        {
            reset(dieHeld, 5);
            holdDie(dieHeld, die);
            cout << "Do you want to use this roll for a combination?" << endl;
            cin >> combo;
        }
        system("cls");
    } while ((combo != 'y' && combo != 'Y') && rolls < 3);


}
