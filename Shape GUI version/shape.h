//Hamilton Nguyen 1000538439 problem 4 07-19-2019

#ifndef	SHAPE_H	
#define	SHAPE_H	
	
#include <gtkmm.h>
#include <vector>
	
class shape_window : public	Gtk::Window	
{	
	public:

	shape_window();		
	virtual	~shape_window();	
		
	protected:			

	//signal	handlers
	void send_value();
	void close_button();	
		
	//widgets
	Gtk::Box shape;
	Gtk::Label	label;
	Gtk::Box	box;
	Gtk::Entry	entry;
	Gtk::Button	button_close, button_send; 
};	
	
#endif	
	