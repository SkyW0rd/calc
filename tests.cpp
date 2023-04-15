#include "calc.h"

TEST(AddTest, Plus)
{
	int a = 100;
	_Sqrt(a, 2);
	EXPECT_EQ(a, 10);
}