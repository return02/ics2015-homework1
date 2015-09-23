#include <stdio.h>
int main()
{
	union NUM
	{
		int a;
		char b[4];
	}num;
	num.a = 0x12345678;
	printf("0x%X\n",num.b[2]);
	return 0;
}
