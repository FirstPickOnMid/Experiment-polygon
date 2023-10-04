#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum class Color
{
	Red,
	Green,
	Blue,
};

class Point
{
private:
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;

	Color color;
public:
	Point(double x, double y, double z, int color)
	{
		this -> x = x;
		this -> y = y;
		this -> z = z;
		this -> color = static_cast<Color>(color);
	}

	void getData()
	{
		cout << "Coordinates of point: " << x << ", " << y << ", " << z <<  "." << endl;
		cout << "Number of code point: " << static_cast<int>(color) << endl;
	}
};

int main()
{
	Point p(1.25, -0.36, 4.68, 2);
	p.getData();

	return 0;
}