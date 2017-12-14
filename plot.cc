#include <iostream>
#include <vector>
#include <cmath>

#include "canvas.hh"

int f(Point point);
void drawFunction(Canvas& canvas);

int main()
{
	std::cout<<std::endl;
	std::cout<<std::endl;
	
	Point center;
	Canvas can(center, 4., 3., 4000., 3000.);
	
	drawFunction(can);	
	can.write("4thTry");
	
	
	std::cout<<"Done!"<<std::endl;
	return 0;
} 


int f(Point point)
{
	int result;
	result= std::max(0.,100.*(sin(1./point.x())*sin(1./point.y())+1.));
	return result;
}

void drawFunction(Canvas& canvas)
{
	int width=canvas.Horizontal();
	int height=canvas.Vertikal();
	
	for (int i=0;i<width;i++)
		for (int j = 0; j < height; j++)
			canvas.setPixel(i,j,f(canvas.coord(i,j)));

}
