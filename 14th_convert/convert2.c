
#include <stdio.h>

int main(int argc, char **argv)
{
	double d = 100.1;
	int i = d;      // double转为int
	char *str = "100ask.taobao.com";
	int *p = (int *)str; // char *转为int * 

	printf("i = %d, str = 0x%x, p = 0x%x\n", i, (unsigned int)str, (unsigned int)p);

	return 0;
}

