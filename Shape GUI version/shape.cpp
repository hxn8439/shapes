//Hamilton Nguyen 1000538439 problem 4 07-19-2019

#include "shape.h"	
#include <iostream>
#include <string>

shape_window::shape_window() : box(Gtk::ORIENTATION_VERTICAL), button_close("Close"), button_send("Fetch")
{			
	set_size_request(400, 200);			
	set_title("SHAPES!!!");	
	
	add(box);	
	
	label.set_text("ENTER A SHAPE!!");	
	box.pack_start(label);	
	
	entry.set_max_length(4000);
	entry.set_text("e.g. triangle");	
	entry.select_region(0, entry.get_text_length());
	box.pack_start(entry);	

	box.pack_start(shape);	

	button_send.signal_clicked().connect(sigc::mem_fun(*this,		
	&shape_window::send_value));		
	box.pack_start(button_send);	


	button_close.signal_clicked().connect(	sigc::mem_fun(*this,
	&shape_window::close_button));
	box.pack_start(button_close);	

	button_close.set_can_default();	
	button_close.grab_default();	

	show_all_children();	
}	
	
shape_window::~shape_window()
{

}	
	
void	shape_window::send_value()	
{			
	std::string	input=entry.get_text();
	for(int i = 0; i < input.length(); i++)
	{
		//LET THE STRING INPUT BE TREATED AS AN CHAR ARRAY, THIS FOR-LOOP WILL LOWER EACH CHARACTER AS LOWER CASE.
		input[i] = tolower(input[i]);
	}	

	if(input.compare("triangle") == 0)
	{	
		Gtk::MessageDialog dialog (*this, "Area",false,Gtk::MESSAGE_WARNING);
		dialog.set_secondary_text("A = (base*height)/2");
		dialog.run();
		
		Gtk::MessageDialog dialog1 (*this, "Perimeter",false,Gtk::MESSAGE_WARNING);
		dialog1.set_secondary_text("P = length+base+height");
		dialog1.run();
	}
	
	if(input.compare("square") == 0)
	{	
		Gtk::MessageDialog dialog (*this, "Area",false,Gtk::MESSAGE_WARNING);
		dialog.set_secondary_text("A = length*length");
		dialog.run();
		
		Gtk::MessageDialog dialog1 (*this, "Perimeter",false,Gtk::MESSAGE_WARNING);
		dialog1.set_secondary_text("P = 4*length");
		dialog1.run();
	}
	
	if(input.compare("pentagon") == 0)
	{	
		Gtk::MessageDialog dialog (*this, "Area",false,Gtk::MESSAGE_WARNING);
		dialog.set_secondary_text("A = (.25)*sqrt(5(5+2sqrt(5))*(length^2))");
		dialog.run();
		
		Gtk::MessageDialog dialog1 (*this, "Perimeter",false,Gtk::MESSAGE_WARNING);
		dialog1.set_secondary_text("P = 5*length");
		dialog1.run();
	}
	
	if(input.compare("hexagon") == 0)
	{	
		Gtk::MessageDialog dialog (*this, "Area",false,Gtk::MESSAGE_WARNING);
		dialog.set_secondary_text("A = 3*(sqrt(3)/2)*(length^2)");
		dialog.run();
		
		Gtk::MessageDialog dialog1 (*this, "Perimeter",false,Gtk::MESSAGE_WARNING);
		dialog1.set_secondary_text("P = 6*length");
		dialog1.run();
	}

	else if (input.compare("triangle") && input.compare("square") && input.compare("pentagon") && input.compare("hexagon"))
	{
		Gtk::MessageDialog dialog (*this, "NOT FOUND",false,Gtk::MESSAGE_ERROR);
		dialog.set_secondary_text("PLEASE ENTER A NEW SHAPE AGAIN");
		dialog.run();
	}	
}	
	
void shape_window::close_button()
{			
	hide();
}	
	