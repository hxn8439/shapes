//Hamilton Nguyen 1000538439 problem 4 07-19-2019

#include "shape.h"	
#include <gtkmm/application.h>	
	
int	main(int argc, char *argv[])
{
	Gtk::Main app(argc, argv);	
	
	shape_window window;	
	
	Gtk::Main::run(window);
	return	0;	
}