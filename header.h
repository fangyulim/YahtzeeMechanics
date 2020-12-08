#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <SFML\Graphics.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define RULES 1
#define PLAY 2
#define EXIT 3

using namespace std;

class Yahtzee
{
private:
	int option;
	int any_array;
	int size;
	int scorecard;
	int player;
	int score_selection;
	int dice;
	int num;
	int die_held;
	int die;
	int dice_value_count;
	int dice_value;
	int num_of_value;
	int kind;
	int yes_no;

public:

	int menu(void);
	void run_app(int);

	void reset(int any_array[], int size);

	void print_game_rules(void);
	void play_game(int scorecard[], int player, int score_selection[]);
	void roll_dice(int dice[], int size);
	void count_dice(int dice[], int size, int dice_value_count[]);
	void print_dice(int num[], int size);
	void hold_die(int die_held[], int die[]);

	void combinations(int scorecard[], int dice[], int dice_value_count[], int player, int score_selection[]);
	int combo_menu(void);
	int sums(int dice_value, int num_of_value);
	int sum_all_die(int die[], int size);
	int of_a_kind(int dice_value_count[], int size, int kind);
	int is_full_house(int dice_value_count[], int size);
	int is_small_straight(int dice_value_count[], int size);
	int is_large_straight(int dice_value_count[], int size);
	int is_yahtzee(int dice_value_count[], int size);

	void invalid_selection(int yes_no, int scorecard[], int dice[], int dice_value_count[], int player, int score_selection[], int option);


};

#endif
