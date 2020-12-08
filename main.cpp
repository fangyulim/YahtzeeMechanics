#include "header.h"
#include "graphics.h"
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
//#include "scoreboard.h"
#include <time.h>
using namespace std;

int main()
{
    Graphics g;
    Yahtzee y;
    int option = 0;
    
    g.run();
        do {
            cout << "------Menu------" << endl;
            cout << "1.Print game rules" << endl;
            cout << "2.Play game" << endl;
            cout << "3.Good Bye! Exiting game" << endl;
            cin >> option;
            system("cls");
        } while ((option < 1) || (option > 3));

 
    switch (option)
    {
    case 1: //Show menu 
    {
        g.C1draw();
        
        break;
    }
    case 2: // Play game
    {
        g.C2draw();
       // y.run_app(option);
        //y.menu();
        break;
    }
    case 3: //Exit game
    {
        g.C3draw();
        break;
    }
    }

    return 0;
}
