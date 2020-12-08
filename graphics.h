#include  "header.h"
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
//#include "scoreboard.h"
#include <time.h>
#include <sstream>
using namespace std;

class Graphics : public Yahtzee
{
private:

public:

	void run();
	void C1draw();
	void C2draw();
	void C3draw();

	Graphics()
	{

	}
};
