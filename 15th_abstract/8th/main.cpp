
#include "Human.h"
//#include "Englishman.h"
//#include "Chinese.h"

void test_eating(Human *h)
{
	h->eating();
}


int main(int argc, char **argv)
{
	Human& e = CreateEnglishman("Bill", 10, "sfwqerfsdfas");
	Human& c = CreateChinese("zhangsan", 11, "beijing");

	Human* h[2] = {&e, &c};
	int i;
	for (i = 0; i < 2; i++)
		test_eating(h[i]);

	
	
	return 0;
}

