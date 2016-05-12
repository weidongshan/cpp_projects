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
	virtual Human* test(void) {cout<<"Human's test"<<endl; return this; }
};

class Englishman : public Human {
public:
	void eating(void) { cout<<"use knife to eat"<<endl; }
	virtual ~Englishman() { cout<<"~Englishman()"<<endl; }
	virtual Englishman* test(void) {cout<<"Englishman's test"<<endl; return this; }
};


class Chinese : public Human {
public:
	void eating(void) { cout<<"use chopsticks to eat"<<endl; }
	virtual ~Chinese() { cout<<"~Chinese()"<<endl; }
	virtual Chinese* test(void) {cout<<"Chinese's test"<<endl; return this; }
};

class Guangximan : public Chinese {
public:
	void eating(void) { cout<<"use chopsticks to eat, I come from guangxi"<<endl; }
};

void test_eating(Human& h)
{
	Englishman *pe;
	Chinese    *pc;
	Guangximan *pg;
	
	h.eating();

	/* 想分辨这个"人"是英国人还是中国人? */
	if (pe = dynamic_cast<Englishman *>(&h))
		cout<<"This human is Englishman"<<endl;

	if (pc = dynamic_cast<Chinese *>(&h))
		cout<<"This human is Chinese"<<endl;
	
	if (pg = dynamic_cast<Guangximan *>(&h))
		cout<<"This human is Guangximan"<<endl;
	
}




int main(int argc, char **argv)
{
	//Human h;
	//Englishman e;
	//Chinese c;
	Guangximan g;

	//test_eating(h);
	//test_eating(e);
	//test_eating(c);
	test_eating(g);


	return 0;
}


