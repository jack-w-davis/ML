#include <stdio.h>

int main(void)
{
	static int foo[100000000] = {};
	printf("%p\n",foo);
	for(size_t i = 0; i < 100000000; i++)
	{
		foo[i] += 12;
	}

}
