#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

class Human {
private:
	int a;
public:
	virtual void eating(void) { cout<<"use hand to eat"<<endl; }
	virtual ~Human() { cout<<"~Human()"<<endl; }
};

class Englishman : public Human {
public:
	void eating(void) { cout<<"use knife to eat"<<endl; }
	virtual ~Englishman() { cout<<"~Englishman()"<<endl; }
};


class Chinese : public Human {
public:
	void eating(void) { cout<<"use chopsticks to eat"<<endl; }
	virtual ~Chinese() { cout<<"~Chinese()"<<endl; }
};

void test_eating(Human h)
{
	h.eating();
}

int main(int argc, char **argv)
{
	Human* h = new Human;
	Englishman* e = new Englishman;
	Chinese* c = new Chinese;

	Human *p[3] = {h, e, c};
	int i;

	for (i = 0; i < 3; i++)
	{
		p[i]->eating();
		delete p[i];
	}


	return 0;
}


