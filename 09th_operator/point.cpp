#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point() {}
	Point(int x, int y) : x(x), y(y) {}

	int getX(){ return x; }
	int getY(){ return y; }
	void setX(int x){ this->x = x; }
	void setY(int y){ this->y = y; }
	void printInfo()
	{
		cout<<"("<<x<<", "<<y<<")"<<endl;
	}
	friend Point add(Point &p1, Point &p2);
	friend Point operator+(Point &p1, Point &p2);
};

Point add(Point &p1, Point &p2)
{
	Point n;
	n.x = p1.x+p2.x;
	n.y = p1.y+p2.y;
	return n;
}

Point operator+(Point &p1, Point &p2)
{
	cout<<"Point operator+(Point &p1, Point &p2)"<<endl;
	Point n;
	n.x = p1.x+p2.x;
	n.y = p1.y+p2.y;
	return n;
}


int main(int argc, char **argv)
{
	Point p1(1, 2);
	Point p2(2, 3);

	Point sum = p1+p2;
	sum.printInfo();

	return 0;
}

