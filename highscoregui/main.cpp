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
	for (int i = 0; i < 10; i++)
	{
		player[i].name = "elias";
		player[i].score = 1;
	}
	InitList(player);
	box->box(FL_UP_BOX);
	box->labelfont(FL_BOLD + FL_ITALIC);
	box->labelsize(36);
	box->labeltype(FL_SHADOW_LABEL);
	window->end();
	window->show(argc, argv);
	return Fl::run();
}