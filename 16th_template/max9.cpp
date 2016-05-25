#include <iostream>
#include <string.h>
#include <unistd.h>

using namespace std;

/*
int& max(int& a, int& b)
{
	return (a < b)? b : a;
}

double& max(double& a, double& b)
{
	return (a < b)? b : a;
}

float& max(float& a, float& b)
{
	return (a < b)? b : a;
}
*/

template<typename T>
const T& mymax(const T& a, const T& b)
{
	cout<<"1: "<<__PRETTY_FUNCTION__<<endl;
	return (a < b)? b : a;
}

template<typename T>
const T& mymax(T& a, T& b)
{
	cout<<"2: "<<__PRETTY_FUNCTION__<<endl;
	return (a < b)? b : a;
}

template<typename T>
const T mymax(T * a, T* b)
{
	cout<<"4: "<<__PRETTY_FUNCTION__<<endl;
	return (*a < *b)? *b : *a;
}


const int& mymax(int& a, int& b)
{
	cout<<"3: "<<__PRETTY_FUNCTION__<<endl;
	return (a < b)? b : a;
}

int main(int argc, char **argv)
{
	int ia = 1;
	int ib = 2;

	cout<<mymax(ia, ib)<<endl;

	int *p1=&ia;
	int *p2=&ib;

	cout<<mymax(p1, p2)<<endl;

	return 0;
}


