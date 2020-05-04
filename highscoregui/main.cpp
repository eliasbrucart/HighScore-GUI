#include <iostream>
#include "Highscore.h"
#include "FL/Fl.H"
#include "FL/Fl_Window.H"
#include "FL/Fl_Box.H"

using namespace std;

using namespace highscore;

int main(int argc, char **argv) {
	Fl_Window *window = new Fl_Window(640, 360);
	Fl_Box *box = new Fl_Box(0, 0, 640, 360, "Hola");
	Score player[10];
	player[0].name = "Elias";
	player[0].score = 53;
	player[1].name = "Pablo";
	player[1].score = 11;
	player[2].name = "Martin";
	player[2].score = 84;
	player[3].name = "Lautaro";
	player[3].score = 39;
	player[4].name = "Juan";
	player[4].score = 47;
	player[5].name = "Dario";
	player[5].score = 57;
	player[6].name = "Miguel";
	player[6].score = 92;
	player[7].name = "Tomas";
	player[7].score = 43;
	player[8].name = "Matias";
	player[8].score = 48;
	player[9].name = "Fermin";
	player[9].score = 13;
	InitList(player);
	for (int i = 0; i < 10; i++)
	{
		WriteInPosition(player, i, player[i].name, player[i].score);
	}
	GetHighestScore(player);
	box->box(FL_UP_BOX);
	box->labelfont(FL_BOLD + FL_ITALIC);
	box->labelsize(36);
	box->labeltype(FL_SHADOW_LABEL);
	window->end();
	window->show(argc, argv);
	return Fl::run();
}