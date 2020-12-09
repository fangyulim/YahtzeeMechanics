#include "graphics.h"
#include "header.h"
using namespace std;
void Graphics::run()
{
    sf::Clock clock;
    sf::Time time_elapsed;
    time_elapsed = clock.getElapsedTime();


    bool wait = false;
}

void Graphics::C1draw()
{
    srand((unsigned int)time(NULL));
    Yahtzee y;
  
    // y.menu();
    Graphics g;

    // create the window
    sf::RenderWindow window(sf::VideoMode(1800, 1000), "Yahtzee Window!");
    while (window.isOpen())
    {
        sf::Font font;
        if (!font.loadFromFile("Oswald-HeavyItalic.ttf"))
        {
        }
        sf::Texture Title;
        sf::Sprite tt;
        if (!Title.loadFromFile("begin.png")) {}
        tt.setTexture(Title);
        tt.setTextureRect(sf::IntRect(0, 0, 1800, 1000));

        sf::Text rule1;
        rule1.setFont(font);
        rule1.setString("The scorecard used for Yahtzee is composed of two sections (upper and lower).");
        rule1.setCharacterSize(50);
        rule1.setFillColor(sf::Color::White);
        rule1.setPosition(25, 200);
        sf::Text rule2;
        rule2.setFont(font);
        rule2.setString("Thirteen scoring combinations are divided amonst the sections.");
        rule2.setCharacterSize(50);
        rule2.setFillColor(sf::Color::White);
        rule2.setPosition(25, 260);
        sf::Text rule3;
        rule3.setFont(font);
        rule3.setString("The upper section has boxes scored by the sum of the dice matching the box.");
        rule3.setCharacterSize(50);
        rule3.setFillColor(sf::Color::White);
        rule3.setPosition(25, 320);
        sf::Text rule4;
        rule4.setFont(font);
        rule4.setString("Once a player scored a box, it may not be changed and is no longer in play.");
        rule4.setCharacterSize(50);
        rule4.setFillColor(sf::Color::White);
        rule4.setPosition(25, 380);
        sf::Text rule5;
        rule5.setFont(font);
        rule5.setString("If the sum of the scores (upper section)>= 63, the player gets a bonus of 35 points.");
        rule5.setCharacterSize(50);
        rule5.setFillColor(sf::Color::White);
        rule5.setPosition(25, 440);
        sf::Text rule6;
        rule6.setFont(font);
        rule6.setString("The lower section contains a number of poker like combinations.");
        rule6.setCharacterSize(50);
        rule6.setFillColor(sf::Color::White);
        rule6.setPosition(25, 500);
        sf::Text rule7;
        rule7.setFont(font);
        rule7.setString("Please press enter  to play game, esc to exit game.");
        rule7.setCharacterSize(80);
        rule7.setFillColor(sf::Color::White);
        rule7.setPosition(100, 650);

        window.draw(tt);
        window.draw(rule1);
        window.draw(rule2);
        window.draw(rule3);
        window.draw(rule4);
        window.draw(rule5);
        window.draw(rule6);
        window.draw(rule7);
        window.display();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
        {
            window.close();
            g.C2draw();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            g.C3draw();
        }
    }
}

void Graphics::C2draw()
{
    sf::Clock clock;
    sf::Time time_elapsed;
    time_elapsed = clock.getElapsedTime();
    sf::Font font;
    if (!font.loadFromFile("Oswald-HeavyItalic.ttf"))
    {
    }
    srand((unsigned int)time(NULL));
    Yahtzee y;
    Yahtzee x;
    // y.menu();
    Graphics g;
    g.run();


    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    srand((unsigned int)time(nullptr));
    num1 = rand() % 6;
    num2 = rand() % 6;
    num3 = rand() % 6;
    num4 = rand() % 6;
    num5 = rand() % 6;

    int pic_num1 = 1;
    int pic_num2 = 2;
    int pic_num3 = 3;
    int pic_num4 = 4;
    int pic_num5 = 5;
    int pic_num6 = 6;
    // create the window
    sf::RenderWindow window(sf::VideoMode(1800, 1000), "Yahtzee Window!");

    sf::Texture dices[6];
    sf::Sprite die1[6];
    sf::Sprite die2[6];
    sf::Sprite die3[6];
    sf::Sprite die4[6];
    sf::Sprite die5[6];
    sf::Texture board;
    sf::Texture p1;
    sf::Sprite score_type;
    sf::Sprite player1;
    sf::Texture p2;
    sf::Sprite player2;





    // run the program as long as the window is open
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();

            //lines
            window.clear(sf::Color::Color(100, 100, 250, 0));
            sf::RectangleShape shape(sf::Vector2f(10.f, 1000.f));
            shape.setFillColor(sf::Color::White);
            shape.setPosition(820, 0);
            sf::RectangleShape shap(sf::Vector2f(10.f, 1000.f));
            shap.setFillColor(sf::Color::White);
            shap.setPosition(600, 0);

            if (!dices[0].loadFromFile("dice-six-faces-one.png"));
            if (!dices[1].loadFromFile("dice-six-faces-two.png"));
            if (!dices[2].loadFromFile("dice-six-faces-three.png"));
            if (!dices[3].loadFromFile("dice-six-faces-four.png"));
            if (!dices[4].loadFromFile("dice-six-faces-five.png"));
            if (!dices[5].loadFromFile("dice-six-faces-six.png"));
            for (int i = 0; i < 6; i++)
            {
                die1[i].setScale(0.25f, 0.25f);
                die1[i].setPosition((1400), 150);
                die1[i].setTexture(dices[i]);
            }

            for (int j = 0; j < 6; j++)
            {
                die2[j].setScale(0.25f, 0.25f);
                die2[j].setPosition((1400), 300);
                die2[j].setTexture(dices[j]);
            }

            for (int n = 0; n < 6; n++)
            {
                die3[n].setScale(0.25f, 0.25f);
                die3[n].setPosition((1400), 450);
                die3[n].setTexture(dices[n]);
            }

            for (int m = 0; m < 6; m++)
            {
                die4[m].setScale(0.25f, 0.25f);
                die4[m].setPosition((1400), 600);
                die4[m].setTexture(dices[m]);
            }

            for (int k = 0; k < 6; k++)
            {
                die5[k].setScale(0.25f, 0.25f);
                die5[k].setPosition((1400), 750);
                die5[k].setTexture(dices[k]);
            }

            if (!board.loadFromFile("GB.png")) {}
            //board
            score_type.setTexture(board);
            score_type.setTextureRect(sf::IntRect(0, 0, 400, 1000));
            //player 1 2
            sf::Font font;
            if (!font.loadFromFile("Oswald-HeavyItalic.ttf"))
            {
            }
            sf::Text p1;
            p1.setFont(font);
            p1.setString("Player 1");
            p1.setCharacterSize(50);
            p1.setFillColor(sf::Color::White);
            p1.setPosition(420, 0);
            sf::Text p2;
            p2.setFont(font);
            p2.setString("Player 2");
            p2.setCharacterSize(50);
            p2.setFillColor(sf::Color::White);
            p2.setPosition(620, 0);
            //dice
            window.draw(die1[num1]);
            window.draw(die2[num2]);
            window.draw(die3[num3]);
            window.draw(die4[num4]);
            window.draw(die5[num5]);

            int numRoll = 1;
            while (numRoll < 3)
            {
                sf::Text YN;
                YN.setFont(font);
                YN.setString("Keep dice?Enter(Y) Space(N)");
                YN.setFillColor(sf::Color::Black);
                YN.setPosition(850, 100);
                YN.setCharacterSize(30);
                window.draw(YN);


                if (event.key.code == sf::Keyboard::Enter)
                {
                    sf::Text noDiePick;
                    noDiePick.setFont(font);
                    noDiePick.setString("How many dice do you want to keep");
                    noDiePick.setFillColor(sf::Color::Black);
                    noDiePick.setPosition(850, 200);
                    noDiePick.setCharacterSize(30);
                    window.draw(noDiePick);

                    sf::Text whiDie;
                    whiDie.setFont(font);
                    whiDie.setString("(A)1 (B)2 (C)3 (D)4 (E)5)");
                    whiDie.setFillColor(sf::Color::Black);
                    whiDie.setPosition(850, 300);
                    whiDie.setCharacterSize(30);
                    window.draw(whiDie);


                    // sf::Event event1{};
                    if (event.key.code == sf::Keyboard::Enter)
                    {
                        sf::Text arrDie;
                        arrDie.setFont(font);
                        arrDie.setString("(A)Die1 (B)Die2 (C)Die3 (D)Die4 (E)Die5");
                        arrDie.setFillColor(sf::Color::Black);
                        arrDie.setPosition(850, 400);
                        arrDie.setCharacterSize(30);
                        window.draw(arrDie);
                        window.clear();
                        if (event.key.code == sf::Keyboard::Enter)
                        {
                            window.clear(sf::Color::Color(100, 100, 250, 0));
                            sf::RectangleShape rect1(sf::Vector2f(0.25f, 0.25f));
                            rect1.setFillColor(sf::Color::Color(100, 100, 250, 0));
                            rect1.setPosition(1400, 150);
                            window.draw(rect1);
                            window.draw(die2[num2]);
                            window.draw(die3[num3]);
                            window.draw(die4[num4]);
                            window.draw(die5[num5]);
                        }

                        else if (sf::Event::TextEntered == sf::Keyboard::B)
                        {
                            sf::RectangleShape rect1(sf::Vector2f(0.25f, 0.25f));
                            rect1.setFillColor(sf::Color::Color(100, 100, 250, 0));
                            rect1.setPosition(1400, 300);
                            window.draw(die1[num1]);
                            window.draw(rect1);
                            window.draw(die3[num3]);
                            window.draw(die4[num4]);
                            window.draw(die5[num5]);
                        }

                        else if (sf::Event::TextEntered == sf::Keyboard::C)
                        {
                            sf::RectangleShape rect1(sf::Vector2f(0.25f, 0.25f));
                            rect1.setFillColor(sf::Color::Color(100, 100, 250, 0));
                            rect1.setPosition(1400, 450);
                            window.draw(die1[num1]);
                            window.draw(die2[num2]);
                            window.draw(rect1);
                            window.draw(die4[num4]);
                            window.draw(die5[num5]);
                        }
                        else if (sf::Event::TextEntered == sf::Keyboard::D)
                        {
                            sf::RectangleShape rect1(sf::Vector2f(0.25f, 0.25f));
                            rect1.setFillColor(sf::Color::Color(100, 100, 250, 0));
                            rect1.setPosition(1400, 600);
                            window.draw(die1[num1]);
                            window.draw(die2[num2]);
                            window.draw(die3[num3]);
                            window.draw(rect1);
                            window.draw(die5[num5]);
                        }
                        else if (sf::Event::TextEntered == sf::Keyboard::E)
                        {
                            sf::RectangleShape rect1(sf::Vector2f(0.25f, 0.25f));
                            rect1.setFillColor(sf::Color::Color(100, 100, 250, 0));
                            rect1.setPosition(1400, 0);
                            window.draw(die1[num1]);
                            window.draw(die2[num2]);
                            window.draw(die3[num3]);
                            window.draw(die4[num4]);
                            window.draw(rect1);
                        }

                    }
                    else  if (event.key.code == sf::Keyboard::Escape)
                    {
                        sf::Text arrDie;
                        arrDie.setFont(font);
                        arrDie.setString("(A)Die1 (B)Die2 (C)Die3 (D)Die4 (E)Die5");
                        arrDie.setFillColor(sf::Color::Black);
                        arrDie.setPosition(850, 400);
                        arrDie.setCharacterSize(30);
                        window.draw(arrDie);
                        //sf::Event event2{};
                        if (event.key.code == sf::Keyboard::A && sf::Keyboard::B)
                        {
                            sf::RectangleShape rect1(sf::Vector2f(0.25f, 0.25f));
                            rect1.setFillColor(sf::Color::Color(100, 100, 250, 0));
                            rect1.setPosition(1400, 150);
                            //sf::RectangleShape rect1(sf::Vector2f(0.25f, 0.25f));
                            rect1.setFillColor(sf::Color::Color(100, 100, 250, 0));
                            rect1.setPosition(1400, 150);
                            window.draw(rect1);
                            window.draw(rect1);
                            window.draw(die3[num3]);
                            window.draw(die4[num4]);
                            window.draw(die5[num5]);
                        }
                        if (event.key.code == sf::Keyboard::A && sf::Keyboard::C)
                        {
                            sf::RectangleShape rect1(sf::Vector2f(0.25f, 0.25f));
                            rect1.setFillColor(sf::Color::Color(100, 100, 250, 0));
                            rect1.setPosition(1400, 150);
                            window.draw(rect1);
                            window.draw(die2[num2]);
                            window.draw(die3[num3]);
                            window.draw(die4[num4]);
                            window.draw(die5[num5]);
                        }
                    }



                }



                numRoll++;

                int score_one = 1;
                score_one = y.sumOne();
                sf::Text ONES1;
                stringstream ss;
                ss << score_one;
                ONES1.setFont(font);
                ONES1.setString("0"); // ONES1.setString(ss.str().c_str());  the number displayed is weird and later on as well has the same problem
                ONES1.setCharacterSize(50);
                ONES1.setFillColor(sf::Color::White);
                ONES1.setPosition(420, 62.5);

                sf::Text ONES2;
                int score_two = 0;
                score_two = y.sumOne();
                stringstream ss1;
                ss1 << score_two;
                ONES2.setFont(font);
                ONES2.setString("1"); // ONES2.setString(ss1.str().c_str());
                ONES2.setCharacterSize(50);
                ONES2.setFillColor(sf::Color::White);
                ONES2.setPosition(620, 62.5);

                int score_three = 0;
                score_three = y.sumTwo();
                stringstream ss2;
                ss2 << score_three;
                sf::Text TWOS1;
                TWOS1.setFont(font);
                TWOS1.setString("2");// TWOS1.setString(ss2.str().c_str())
                TWOS1.setCharacterSize(50);
                TWOS1.setFillColor(sf::Color::White);
                TWOS1.setPosition(420, 125);

                int score_four = 0;
                score_four = y.sumTwo();
                stringstream ss3;
                ss3 << score_four;
                sf::Text TWOS2;
                TWOS2.setFont(font);
                TWOS2.setString("2");// TWOS2.setString(ss3.str().c_str())
                TWOS2.setCharacterSize(50);
                TWOS2.setFillColor(sf::Color::White);
                TWOS2.setPosition(620, 125);

                int score_five = 0;
                score_five = y.sumThree();
                stringstream ss4;
                ss4 << score_five;
                sf::Text THREES1;
                THREES1.setFont(font);
                THREES1.setString("9");// THREES1.setString(ss4.str().c_str())
                THREES1.setCharacterSize(50);
                THREES1.setFillColor(sf::Color::White);
                THREES1.setPosition(420, 187.5);

                int score_six = 0;
                score_six = y.sumThree();
                stringstream ss5;
                ss5 << score_six;
                sf::Text THREES2;
                THREES2.setFont(font);
                THREES2.setString("0"); //THREES2.setString(ss5.str().c_str())
                THREES2.setCharacterSize(50);
                THREES2.setFillColor(sf::Color::White);
                THREES2.setPosition(620, 187.5);

                int score_seven = 0;
                score_seven = y.sumFour();
                stringstream ss6;
                ss6 << score_seven;
                sf::Text FOURS1;
                FOURS1.setFont(font);
                FOURS1.setString("0"); //FOURS1.setString(ss6.str().c_str())
                FOURS1.setCharacterSize(50);
                FOURS1.setFillColor(sf::Color::White);
                FOURS1.setPosition(420, 250);

                int score_eight = 0;
                score_eight = y.sumFour();
                stringstream ss7;
                ss7 << score_eight;
                sf::Text FOURS2;
                FOURS2.setFont(font);
                FOURS2.setString("8"); //FOURS2.setString(ss7.str().c_str())
                FOURS2.setCharacterSize(50);
                FOURS2.setFillColor(sf::Color::White);
                FOURS2.setPosition(620, 250);

                int score_nine = 0;
                score_nine = y.sumFive();
                stringstream ss8;
                ss8 << score_nine;
                sf::Text FIVES1;
                FIVES1.setFont(font);
                FIVES1.setString("5"); //FIVES1.setString(ss8.str().c_str())
                FIVES1.setCharacterSize(50);
                FIVES1.setFillColor(sf::Color::White);
                FIVES1.setPosition(420, 312.5);

                int score_ten = 0;
                score_ten = y.sumFive();
                stringstream ss9;
                ss9 << score_ten;
                sf::Text FIVES2;
                FIVES2.setFont(font);
                FIVES2.setString("0"); //FIVES2.setString(ss9.str().c_str())
                FIVES2.setCharacterSize(50);
                FIVES2.setFillColor(sf::Color::White);
                FIVES2.setPosition(620, 312.5);


                int score_eleven = 0;
                score_eleven = y.sumSix();
                stringstream ss10;
                ss10 << score_eleven;
                sf::Text SIX1;
                SIX1.setFont(font);
                SIX1.setString("0"); //SIX1.setString(ss10.str().c_str())
                SIX1.setCharacterSize(50);
                SIX1.setFillColor(sf::Color::White);
                SIX1.setPosition(420, 375);

                int score_twelve = 0;
                score_twelve = y.sumSix();
                stringstream ss11;
                ss11 << score_twelve;
                sf::Text SIX2;
                SIX2.setFont(font);
                SIX2.setString("6");//SIX2.setString(ss11.str().c_str())
                SIX2.setCharacterSize(50);
                SIX2.setFillColor(sf::Color::White);
                SIX2.setPosition(620, 375);

                int score_13 = 0;
                score_13 = y.threeKind();
                stringstream ss12;
                ss12 << score_13;
                sf::Text TK1;
                TK1.setFont(font);
                TK1.setString("0");// TK1.setString(ss12.str().c_str())
                TK1.setCharacterSize(50);
                TK1.setFillColor(sf::Color::White);
                TK1.setPosition(420, 448);

                int score_14 = 0;
                score_14 = y.threeKind();
                stringstream ss13;
                ss13 << score_14;
                //sf::Text TWOS2;
                sf::Text TK2;
                TK2.setFont(font);
                TK2.setString("0");//TK2.setString(ss13.str().c_str())
                TK2.setCharacterSize(50);
                TK2.setFillColor(sf::Color::White);
                TK2.setPosition(620, 448);

                int score_15 = 0;
                score_15 = y.fourKind();
                stringstream ss14;
                ss14 << score_15;
                //sf::Text TWOS2;
                sf::Text FK1;
                FK1.setFont(font);
                FK1.setString("0");//FK1.setString(ss14.str().c_str())
                FK1.setCharacterSize(50);
                FK1.setFillColor(sf::Color::White);
                FK1.setPosition(420, 520);

                int score_16 = 0;
                score_16 = y.fourKind();
                stringstream ss15;
                ss3 << score_16;
                //sf::Text TWOS2;
                sf::Text FK2;
                FK2.setFont(font);
                FK2.setString("0");//FK2.setString(ss15.str().c_str())
                FK2.setCharacterSize(50);
                FK2.setFillColor(sf::Color::White);
                FK2.setPosition(620, 520);

                int score_17 = 0;
                score_17 = y.full_House();
                stringstream ss16;
                ss16 << score_17;
                // sf::Text TWOS2;
                sf::Text FH1;
                FH1.setFont(font);
                FH1.setString("0");//FH1.setString(ss16.str().c_str())
                FH1.setCharacterSize(50);
                FH1.setFillColor(sf::Color::White);
                FH1.setPosition(420, 585);

                int score_18 = 0;
                score_18 = y.full_House();
                stringstream ss17;
                ss17 << score_18;
                //sf::Text TWOS2;
                sf::Text FH2;
                FH2.setFont(font);
                FH2.setString("0");//FH2.setString(ss17.str().c_str())
                FH2.setCharacterSize(50);
                FH2.setFillColor(sf::Color::White);
                FH2.setPosition(620, 585);

                int score_19 = 0;
                score_19 = y.smallStraight();
                stringstream ss18;
                ss18 << score_19;
                //sf::Text TWOS2;
                sf::Text SS1;
                SS1.setFont(font);
                SS1.setString("0");//SS1.setString(ss18.str().c_str())
                SS1.setCharacterSize(50);
                SS1.setFillColor(sf::Color::White);
                SS1.setPosition(420, 655);

                int score_20 = 0;
                score_20 = y.smallStraight();
                stringstream ss19;
                ss19 << score_20;
                //sf::Text TWOS2;
                sf::Text SS2;
                SS2.setFont(font);
                SS2.setString("0");//SS2.setString(ss19.str().c_str())
                SS2.setCharacterSize(50);
                SS2.setFillColor(sf::Color::White);
                SS2.setPosition(620, 655);

                int score_21 = 0;
                score_21 = y.largeStraight();
                stringstream ss20;
                ss20 << score_21;
                //sf::Text TWOS2;
                sf::Text LS1;
                LS1.setFont(font);
                LS1.setString("0");////LS1.setString(ss20.str().c_str())
                LS1.setCharacterSize(50);
                LS1.setFillColor(sf::Color::White);
                LS1.setPosition(420, 715);

                int score_22 = 0;
                score_22 = y.largeStraight();
                stringstream ss21;
                ss21 << score_22;
                //sf::Text TWOS2;
                sf::Text LS2;
                LS2.setFont(font);
                LS2.setString("0");//LS2.setString(ss21.str().c_str())
                LS2.setCharacterSize(50);
                LS2.setFillColor(sf::Color::White);
                LS2.setPosition(620, 715);

                int score_23 = 0;
                score_23 = y.Yahtzeee();
                stringstream ss22;
                ss22 << score_23;
                //sf::Text TWOS2;
                sf::Text YZ1;
                YZ1.setFont(font);
                YZ1.setString("0");//YZ1.setString(ss22.str().c_str())
                YZ1.setCharacterSize(50);
                YZ1.setFillColor(sf::Color::White);
                YZ1.setPosition(420, 790);

                int score_24 = 0;
                score_24 = y.Yahtzeee();
                stringstream ss23;
                ss23 << score_24;
                //sf::Text TWOS2;
                sf::Text YZ2;
                YZ2.setFont(font);
                YZ2.setString("0");//YZ2.setString(ss23.str().c_str())
                YZ2.setCharacterSize(50);
                YZ2.setFillColor(sf::Color::White);
                YZ2.setPosition(620, 790);

                int score_25 = 0;
                score_25 = y.chance();
                stringstream ss24;
                ss24 << score_25;
                sf::Text CH1;
                CH1.setFont(font);
                CH1.setString("0");//CH1.setString(ss24.str().c_str())
                CH1.setCharacterSize(50);
                CH1.setFillColor(sf::Color::White);
                CH1.setPosition(420, 860);

                int score_26 = 0;
                score_26 = y.chance();
                stringstream ss25;
                ss25 << score_26;
                sf::Text CH2;
                CH2.setFont(font);
                CH2.setString("0");//CH2.setString(ss25.str().c_str())
                CH2.setCharacterSize(50);
                CH2.setFillColor(sf::Color::White);
                CH2.setPosition(620, 860);

                int score_27 = 0;
                score_27 = y.totalScore();
                stringstream ss26;
                ss26 << score_27;
                sf::Text TS1;
                TS1.setFont(font);
                TS1.setString("16");////TS1.setString(ss26.str().c_str())
                TS1.setCharacterSize(50);
                TS1.setFillColor(sf::Color::White);
                TS1.setPosition(420, 930);

                int score_28 = 0;
                score_28 = y.totalScore();
                stringstream ss27;
                ss27 << score_28;
                sf::Text TS2;
                TS2.setFont(font);
                TS2.setString("17");//TS2.setString(ss27.str().c_str())
                TS2.setCharacterSize(50);
                TS2.setFillColor(sf::Color::White);
                TS2.setPosition(620, 930);

                window.draw(ONES1);
                window.draw(ONES2);
                window.draw(TWOS1);
                window.draw(TWOS2);
                window.draw(THREES1);
                window.draw(THREES2);
                window.draw(FOURS1);
                window.draw(FOURS2);
                window.draw(FIVES1);
                window.draw(FIVES2);
                window.draw(SIX1);
                window.draw(SIX2);
                window.draw(TK1);
                window.draw(TK2);
                window.draw(FK1);
                window.draw(FK2);
                window.draw(FH1);
                window.draw(FH2);
                window.draw(SS1);
                window.draw(SS2);
                window.draw(LS1);
                window.draw(LS2);
                window.draw(YZ1);
                window.draw(YZ2);
                window.draw(CH1);
                window.draw(CH2);
                window.draw(TS1);
                window.draw(TS2);
            }

            //board and player
            window.draw(score_type);
            window.draw(p1);
            window.draw(p2);
            //draw line
            window.draw(shape);
            window.draw(shap);
            window.display();
        }


    }
    if (x.totalScore() > y.totalScore())

    {   //congratulations!
        while (window.isOpen())
        {
            sf::Font font;
            if (!font.loadFromFile("Oswald-HeavyItalic.ttf"))
            {
            }
            sf::Texture Cong;
            sf::Sprite cg;
            if (!Cong.loadFromFile("cg.png")) {}
            cg.setTexture(Cong);
            cg.setTextureRect(sf::IntRect(0, 0, 1800, 1000));

            sf::Text CONGRAT;
            CONGRAT.setFont(font);

            CONGRAT.setString("Congratulations!Player""x""has won!");
            CONGRAT.setCharacterSize(100);
            CONGRAT.setFillColor(sf::Color::White);
            CONGRAT.setPosition(250, 375);
            window.draw(cg);
            window.draw(CONGRAT);
            window.display();
        }
    }

    else if (y.totalScore() > x.totalScore())
    {
        sf::Font font;
        if (!font.loadFromFile("Oswald-HeavyItalic.ttf"))
        {
        }
        sf::Texture Cong;
        sf::Sprite cg;
        if (!Cong.loadFromFile("cg.png")) {}
        cg.setTexture(Cong);
        cg.setTextureRect(sf::IntRect(0, 0, 1800, 1000));

        sf::Text CONGRAT;
        CONGRAT.setFont(font);

        CONGRAT.setString("Congratulations!Player""y""has won!");
        CONGRAT.setCharacterSize(100);
        CONGRAT.setFillColor(sf::Color::White);
        CONGRAT.setPosition(250, 375);
        window.draw(cg);
        window.draw(CONGRAT);
        window.display();
    }

    else
    {
        sf::Font font;
        if (!font.loadFromFile("Oswald-HeavyItalic.ttf"))
        {
        }
        sf::Texture Cong;
        sf::Sprite cg;
        if (!Cong.loadFromFile("cg.png")) {}
        cg.setTexture(Cong);
        cg.setTextureRect(sf::IntRect(0, 0, 1800, 1000));

        sf::Text CONGRAT;
        CONGRAT.setFont(font);

        CONGRAT.setString("Its a tie! Better luck next time!");
        CONGRAT.setCharacterSize(100);
        CONGRAT.setFillColor(sf::Color::White);
        CONGRAT.setPosition(250, 375);
        window.draw(cg);
        window.draw(CONGRAT);
        window.display();
    }

}

void Graphics::C3draw()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(1800, 1000), "Yahtzee Window!");

    while (window.isOpen()) {
        sf::Font font;
        if (!font.loadFromFile("Oswald-HeavyItalic.ttf"))
        {
        }
        sf::Clock clock;
        float time_passed;
        time_passed = clock.getElapsedTime().asSeconds();
        sf::Texture background;
        sf::Sprite bg;
        if (!background.loadFromFile("bg.png")) {}
        bg.setTexture(background);
        bg.setTextureRect(sf::IntRect(0, 0, 1800, 1000));
        sf::Text bye;
        bye.setFont(font);
        bye.setString("Good bye! Thank you for playing!");
        bye.setCharacterSize(100);
        bye.setFillColor(sf::Color::White);
        bye.setPosition(250, 375);
        window.draw(bg);
        window.draw(bye);
        window.display();

        sf::Keyboard exit;
        sf::Text ex;
        ex.setFont(font);
        ex.setString("Press Zero to exit game.");
        ex.setCharacterSize(100);
        ex.setFillColor(sf::Color::White);
        ex.setPosition(250, 500);
        window.draw(ex);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            window.close();
        }
    }


}