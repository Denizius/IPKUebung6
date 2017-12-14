#include <iostream>

class Point
{
private:
	double _X,_Y;
	
public:
	//Konstruktor und Destruktor
	Point()
		{_X=0.;_Y=0.;};
	Point(double X, double Y)
		{_X=X; _Y=Y;}
	
	//Methoden
double x() const
{	
	return _X;
}

double y() const
{
	return _Y;
}

void Print()
{
	std::cout<<"X= "<<_X<<" and Y= "<<_Y<<std::endl;
}

};
