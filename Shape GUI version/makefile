CXXFLAGS += -std=c++11
GTKFLAGS = `pkg-config gtkmm-3.0 --cflags --libs`

ex: shape_main.o shape.o
	$(CXX) $(CXXFLAGS) -o shape shape_main.o shape.o $(GTKFLAGS)
	
shape_main.o: shape_main.cpp shape.h
	$(CXX) $(CXXFLAGS) -c shape_main.cpp $(GTKFLAGS)
	
shape.o: shape.h shape.cpp
	$(CXX) $(CXXFLAGS) -c shape.cpp $(GTKFLAGS)
	
cleanup:
	echo "Cleaning up object files and executable!"
	rm *.o
	rm shape