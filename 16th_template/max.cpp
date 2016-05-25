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
T& mymax(T& a, T& b)
{
	cout<<__PRETTY_FUNCTION__<<endl;
	return (a < b)? b : a;
}


int main(int argc, char **argv)
{
	int ia = 1, ib = 2;
	float fa = 1, fb = 2;
	double da = 1, db = 2;
	
	mymax(ia, ib);
	mymax(fa, fb);
	mymax(da, db);

	return 0;
}


