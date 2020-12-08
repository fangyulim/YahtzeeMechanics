#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

class Yahtzee
{
private:
	int p2sumOnes;
	int p2sumTwos;
	int p2sumThrees;
	int p2sumFours;
	int p2sumFives;
	int p2sumSixs;
	int p2threeOKind;
	int p2fourOKind;
	int p2fullHouse;
	int p2smallSt;
	int p2largeSt;
	int p2yahtzeeS;
	int p2chance;
	int p2totalS;
	int p2bonus;

	//int option;
	//int any_array;
	//int size;
	//int scorecard;
	//int player;
	//int score_selection;
	int p2dice[6];
	int p2num;
	int p2die_held;
	int p2die[6];
	int p2diceValueCount[6];
	int p2diceValue;
	int p2numValue;
	//int kind;
	//int yes_no;

public:

	
	Yahtzee()
	{
		int p2sumOnes = 0;
		int p2sumTwos = 0;
		int p2sumThrees = 0;
		int p2sumFours = 0;
		int p2sumFives = 0;
		int p2sumSixs = 0;
		int p2threeOKind = 0;
		int p2fourOKind = 0;
		int p2fullHouse = 0;
		int p2smallSt = 0;
		int p2largeSt = 0;
		int p2yahtzeeS = 0;
		int p2chance = 0;
		int p2totalS = 0;
		int p2bonus = 0;

		int p2dice = 0;
		int p2num = 0;
		int p2noDieHold = 0;
		int p2die = 0;
		int p2diceValueCount = 0;
		int p2diceValue = 0;
		int p2numValue = 0;
	}


	void rollDice(int dice[]);
	void countDice(int dice[], int dice_value_count[]);
	//int calcFullH();
	void holdDie(int p2die_held[], int die[]);
	int sumOne();
	int sumTwo();
	int sumThree();
	int sumFour();
	int sumFive();
	int sumSix();
	int BonusCal();
	int threeKind();
	int fourKind();
	int full_House();
	int smallStraight();
	int largeStraight();
	int Yahtzeee();
	void invalid();
	int totalScore();
	void reset(int anyArray[], int size);

	void playGame();



};

#endif
