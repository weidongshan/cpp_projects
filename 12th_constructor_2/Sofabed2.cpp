#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Furniture {
private:
	int weight;
public:
	void setWeight(int weight) { this->weight = weight; }
	int getWeight(void) const { return weight; }
public:
	Furniture() { cout <<"Furniture()"<<endl; }
};

class Vertification3C {
public:
	Vertification3C() { cout <<"Vertification3C()"<<endl; }
};

class Sofa : virtual public Furniture , virtual public Vertification3C{
private:
	int a;
public:
	void watchTV(void) { cout<<"watch TV"<<endl; }
public:
	Sofa() { cout <<"Sofa()"<<endl; }
};

class Bed : virtual public Furniture, virtual public Vertification3C {
private:
	int b;
public:
	void sleep(void) { cout<<"sleep"<<endl; }
public:
	Bed() { cout <<"Bed()"<<endl; }
};

class Sofabed : public Sofa, public Bed {
private:
	int c;
public:
	Sofabed() { cout <<"Sofabed()"<<endl; }
};

class LeftRightCom {
public:
	LeftRightCom() { cout <<"LeftRightCom()"<<endl; }
};

class Date {
public:
	Date() { cout <<"Date()"<<endl; }
};

class Type {
public:
	Type() { cout <<"Type()"<<endl; }
};


class LeftRightSofabed : public Sofabed, virtual public LeftRightCom {
private:
	Date date;
	Type type;

public:
	LeftRightSofabed() { cout <<"LeftRightSofabed()"<<endl; }
	
};

int main(int argc, char **argv)
{
	LeftRightSofabed s;
	return 0;
}


