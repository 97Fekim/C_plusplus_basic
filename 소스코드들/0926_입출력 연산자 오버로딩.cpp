#include <iostream>

using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		:m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	/*void print()
	{
		cout << m_x << " " << m_y << " " << m_z << endl;;
	}*/

	friend ostream& operator << (ostream& out, const Point& point)
	{
		out << m_x << " " << m_y << " " << m_z;

		return out;
	}

};


int main()
{
	
	Point p1(0.0, 0.1, 0.2), p2(3.4,1.5,2.0);

	


	return 0;
}