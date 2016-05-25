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
	cout<<__PRETTY_FUNCTION__<<endl;
	return (a < b)? b : a;
}


template<typename T>
const T* mymax2(const T* a, const T* b)
{
	cout<<__PRETTY_FUNCTION__<<endl;
	return (a < b)? b : a;
}

int main(int argc, char **argv)
{
	char a[]="ab";
	char b[]="cd";
	

	mymax(a, b);  /* T=char[3] */
	mymax2(a, b);

	char a2[]="abc";
	char b2[]="cd";

	//mymax(a2, b2);  /* mymax(char[4], char[3]), 无法推导出T: mymax(char& [4], char& [3]), 因为两个参数类型不一样 */
	mymax2(a2, b2);   /* mymax2(char[4], char[3]), 推导: mymax2(const char *, const char *); */

	return 0;
}


