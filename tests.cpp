#include "calc.h"
#include <cmath>
const double eps = 1;
TEST(AddTest, add)
{
	int a = 10;
	_add(a, 2);
	ASSERT_EQ(a, 12);
}
TEST(SubTest, sub)
{
	int a = 10;
	_sub(a, 2);
	ASSERT_EQ(a, 8);
}
TEST(MulTest, mul)
{
	int a = 10;
	_mul(a, 2);
	ASSERT_EQ(a, 20);
}
TEST(DivTest, div)
{
	int a = 10;
	_div(a, 2);
	ASSERT_EQ(a, 5);
}
TEST(SqrtTest, sqrt)
{
	int a = 100;
	_sqrt(a, 2);
	ASSERT_EQ(a, 10);
}
TEST(PowTest, pow)
{
	ASSERT_EQ(_pow(10, 2), 100);
}
TEST(LogTest, log2)
{
	int a = 1024;
	_log2(a);
	ASSERT_NEAR(a, log2(1024), eps);
}
TEST(SinTest, sin)
{
	double a = 0.5;
	_sin(a);
	ASSERT_NEAR(a, sin(0.5), eps);
}
TEST(SinTest, asin)
{
	double a = 0.5;
	_asin(a);
	ASSERT_NEAR(a, asin(0.5), eps);
}
TEST(CosTest, cos)
{
	double a = 0.5;
	_cos(a);
	ASSERT_NEAR(a, cos(0.5), eps);
}
TEST(CosTest, acos)
{
	double a = 0.5;
	_cos(a);
	ASSERT_NEAR(a, acos(0.5), eps);
}
TEST(TanTest, tg)
{
	double a = 0.5;
	_tg(a);
	ASSERT_NEAR(a, tan(0.5), eps);
}
TEST(TanTest, atg)
{
	double a = 0.5;
	_atg(a);
	ASSERT_NEAR(a, atan(0.5), eps);
}
TEST(TanTest, ctg)
{
	double a = 0.5;
	double b = 0.5;
	_sin(a);
	_cos(b);
	ASSERT_NEAR(b / a, cos(0.5)/sin(0.5), eps);
}
