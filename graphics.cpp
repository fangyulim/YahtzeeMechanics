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
        }
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
        { }
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
               
                sf::Event event1{};
                if (event1.key.code == sf::Keyboard::A)
                {
                    sf::Text arrDie;
                    arrDie.setFont(font);
                    arrDie.setString("(A)Die1 (B)Die2 (C)Die3 (D)Die4 (E)Die5");
                    arrDie.setFillColor(sf::Color::Black);
                    arrDie.setPosition(850, 400);
                    arrDie.setCharacterSize(30);
                    window.draw(arrDie);
                    sf::Event event2{};
                    if (event2.key.code == sf::Keyboard::A)
                    {
                        window.draw(die2[num2]);
                        window.draw(die3[num3]);
                        window.draw(die4[num4]);
                        window.draw(die5[num5]);
                    }

                }

                

            }
            

           
            numRoll++;
        }
        
        //board and player
        window.draw(score_type);
        window.draw(p1);
        window.draw(p2);
        //draw line
        window.draw(shape);
        window.draw(shap);
        window.display();
       

        //congratulations!
       /* while (window.isOpen())
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
        }*/
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
