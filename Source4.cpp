//////////////////////////////
// Miquette Orren
// CS 172 Ex04_04
// problem 11.9
/////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;
public:
	double getX()
	{
		return x;
	}
	void setX(double X)
	{
		x = X;
	}
	double getY()
	{
		return y;
	}
	void setY(double Y)
	{
		y = Y;
	}
	double getWidth()
	{
		return width;
	}
	void setWidth(double WIdth)
	{
		width = WIdth;
	}
	double getHeight()
	{
		return height;
	}
	void setHeight(double HEight)
	{
		height = HEight;
	}
	Rectangle2D()
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	Rectangle2D(double X, double Y, double Width, double Height)
	{
		x = X;
		y = Y;
		width = Width;
		height = Height;
	}
	const double getArea(double Width, double Height)
	{
		double area;
		area = Width * Height;
		return area;
	}
	const double getPerimeter(double Width, double Height)
	{
		double perimeter;
		perimeter = (2 * Width) + (2 * Height);
		return perimeter;
	}
	const bool contains(double X, double Y)
	{
		double top = y + (height / 2);
		double bot = y - (height / 2);
		double right = x + (width / 2);
		double left = x - (width / 2);

		if ((x < right && x > left) && (y < top && y > bot))
			return true;
		else
			return false;
	}
	
	const bool contains(const Rectangle2D &r)
	{
		double top = y + (height / 2);
		double bot = y - (height / 2);
		double right = x + (width / 2);
		double left = x - (width / 2);

		double t = r.y + (r.height / 2);
		double b = r.y - (r.height / 2);
		double ri = r.x + (r.width / 2);
		double l = r.x - (r.width / 2);

		if (t < top && b > bot && ri < right && l > left)
			return true;
		else
			return false;
	}
	const bool overlap(const Rectangle2D &r)
	{
		double top = y + (height / 2);
		double bot = y - (height / 2);
		double right = x + (width / 2);
		double left = x - (width / 2);

		double t = r.y + (r.height / 2);
		double b = r.y - (r.height / 2);
		double ri = r.x + (r.width / 2);
		double l = r.x - (r.width / 2);

		if (t > top && (b > bot && b < top))
			return true;
		else if (b < bot && (t < top && t > bot))
			return true;
		else if (ri > right && (l > left && l < right))
			return true;
		else if (l < left && (ri < right && ri > left))
			return true;
		else
			return false;
	}
};




int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	

	cout << r1.getArea(5.5, 4.9) << endl;
	cout << r1.getPerimeter(5.5, 4.9) << endl;
	cout << r1.contains(3, 3) << r1.contains(r2) << r1.overlap(r3) << endl;
	return 0;
}