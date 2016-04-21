#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Point {
private:
	int x;
	int y;

public:
	Point() 
	{
		cout<<"Point()"<<endl;
	}
	Point(int x, int y) : x(x), y(y) 
	{
		cout<<"Point(int x, int y)"<<endl;
	}

	Point(const Point& p)
	{
		cout<<"Point(const Point& p)"<<endl;
		x = p.x;
		y = p.y;
	}
	~Point() 
	{
		cout<<"~Point()"<<endl;
	}

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
	friend Point& operator++(Point &p);
	friend Point operator++(Point &p, int a);
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

/* Point p(1,2); ++p; */
Point& operator++(Point &p)
{
	cout<<"++p"<<endl;
	p.x += 1;
	p.y += 1;
	return p;
}

/* Point p(1,2); p++; */
Point operator++(Point &p, int a)
{
	cout<<"p++"<<endl;
	Point n;
	n = p;
	p.x += 1;
	p.y += 1;
	return n;	
}

int main(int argc, char **argv)
{
	Point p1(1, 2);

	cout<<"begin"<<endl;
	++p1;
	cout << "******************"<<endl;

	p1++;
	cout<<"end"<<endl;


	return 0;
}

