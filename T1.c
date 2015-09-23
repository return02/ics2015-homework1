#include <stdio.h>
#pragma pack(push,4)
struct test1{
	char x2[3];
	short x3[2];
	int x1;
	long long x4;
};
#pragma pack(pop)
struct test2{
	char x2[3];
	short x3[2];
	int x1;
	long long x4;
}__attribute__((aligned(4)));
int main()
{
	int ans1 = sizeof(struct test1);
	int ans2 = sizeof(struct test2);
	printf("ans1 = %d\n",ans1);
	printf("ans2 = %d\n",ans2);
	return 0;
}
