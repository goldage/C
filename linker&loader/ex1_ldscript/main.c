#include <stdio.h>

extern int test(int n);
extern int test1(int n);

int main(int argc, char * argv[])
{
	printf("Hello : %d %d\n",test(100),test1(200));
	getchar();
	return 0;
}
