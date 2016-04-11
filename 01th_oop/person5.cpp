
#include <stdio.h>

struct person {
	char *name;
	int age;
	char *work;

	void printInfo(void)
	{
		printf("name = %s, age = %d, work = %s\n", name, age, work); 
	}
};

int main(int argc, char **argv)
{
	struct person persons[] = {
		{"zhangsan", 10, "teacher"},
		{"lisi", 16, "doctor"},
	};
	
	persons[0].printInfo();
	persons[1].printInfo();
	
	return 0;
}

