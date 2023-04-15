#include"calc.h"
int main()
{
	int a = 1000;
	_Sqrt(a, 2);
	std::cout << a << std::endl;
	_Pow(a, 2);
	std::cout << a << std::endl;
	testing::InitGoogleTest();
	RUN_ALL_TESTS();
	return 0;
}