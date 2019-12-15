//Hamilton Nguyen 1000538439 Problem 3. 06/09/2019

#include <iostream>
#include <string>

using namespace std;

//FUNCTION ON ALL SHAPES INFORMATION, THESE FUNCTIONS ARE RESPONSIBLE FOR OUTPUTTING SHAPE INFORMATION SUCH AS AREA AND PARIMETER FORMULAS. 
void triangle()
{
	cout<<"area=(base*height)/2";
	cout<<"\n";
	cout<<"Perimeter=length+base+height";
	cout<<"\n\n";
}

void square()
{
	cout<<"area=length*length";
	cout<<"\n";
	cout<<"perimeter=4*length";
	cout<<"\n\n";
}

void pentagon()
{
	cout<<"area=(.25)*sqrt(5(5+2sqrt(5))*(length^2))";
	cout<<"\n";
	cout<<"perimeter=5*length";
	cout<<"\n\n";
}

void hexagon()
{
	cout<<"area=3*(sqrt(3)/2)*(length^2)";
	cout<<"\n";
	cout<<"perimeter= 6*length";
	cout<<"\n\n";
}

int main()
{
	cout<<"********\n";
	cout<<"Shapes!\n";
	cout<<"********\n";
	cout<<"\n";
	
	int number = 1;
	int run = 1;
	string input;	
	
	//THIS WHILE LOOP WILL CONTINUE TO PROMPT THE USER UNTIL THE USER INPUT EXIT.
	while (run)
	{	
		cout<<number<<". Shape: ";
		cin>>input;

		for(int i = 0; i < input.length(); i++)
		{
			//LET THE STRING INPUT BE TREATED AS AN CHAR ARRAY, THIS FOR-LOOP WILL LOWER EACH CHARACTER AS LOWER CASE.
			input[i] = tolower(input[i]);
		}		
		
		//THE INPUT WILL COMPARE THE STRING TO SEE IF IT MATCHES THE SHAPE INFORMATION AND WILL CALL THE SPECIFIC FUNCTION.
		if(input.compare("triangle") == 0)
		{
			triangle();
			number++;
		}

		if(input.compare("square") == 0)
		{
			square();
			number++;
		}
		
		if(input.compare("pentagon") == 0)
		{
			pentagon();
			number++;
		}

		if(input.compare("hexagon") == 0)
		{
			hexagon();
			number++;
		}
		
		//THIS IF STATEMENT IS RESPONSIBLE FOR CHECKING IF THE INPUT DOES NOT MATCH THE REQUIRED SHAPE INFORMATION. IF IT DOES NOT MATCH IT WILL OUTPUT A RESPONSE
		if(input.compare("triangle") != 0 && input.compare("square") != 0 && input.compare("pentagon") != 0 && input.compare("hexagon") != 0 && input.compare("exit") != 0)
		{
			cout<<"Sorry, information for this shape is not available.";
			cout<<"\n\n";
			number++;
		}

		//THIS IF STATEMENT IS RESPONSIBLE FOR EXITING AND END PROGRAM.	
		
		if(input.compare("exit") == 0)
		{
			number = number-1;
			cout<<"-"<<number<<"shapes entered.\n";			
			cout<<"Exiting...\n\n";
			return run = 0;
		}
	}
}

