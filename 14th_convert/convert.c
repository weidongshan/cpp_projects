
#include <stdio.h>

int main(int argc, char **argv)
{
	double d = 100.1;
	int i = d;  // doubleתΪint
	char *str = "100ask.taobao.com";
	int *p = str; // char *תΪint * 

	printf("i = %d, str = 0x%x, p = 0x%x\n", i, str, p);

	return 0;
}

