#include <iostream>
#include <vector>
#include "point.hh"
#include "pgm.hh"

class Canvas
{
private:
	Point _center;
	double _width, _height;
	int _horPixels, _vertPixels;
	std::vector<std::vector<int> > _pixels;
	
public:
	//Konstruktor
	Canvas(Point& center,double width,double height,int horPixels, int vertPixels): _center(center), _width(width), _height(height), _horPixels(horPixels), _vertPixels(vertPixels), _pixels(horPixels,{{vertPixels}}) {}
	
	
	//Methoden
	
Point coord(int i, int j) const
{
	if ((i>=_horPixels)||(j>=_vertPixels)||(i<0)||(j<0))
	{
		std::cout<<"WARNING: Point outside of canvas"<<std::endl;
	}
	
	
	double WidpP=_width/_horPixels;
	double HeipP=_height/_vertPixels;
	
	Point result((WidpP*i-_width/2), (HeipP*j-_height/2));
	
	return result;
}

double Width() const
{
	return _width;
}

double Height() const
{
	return _height;
}

int Horizontal() const
{
	return _horPixels;
}

int Vertikal() const
{
	return _vertPixels;
}

void write(const std::string& filename)
{
	write_pgm(_pixels, filename);
}

void setPixel(int i, int j, int grey)
{
	_pixels[i][j]=grey;
}
};
